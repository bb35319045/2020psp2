/*今回は両側検定の場合で考える*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

extern double ave_online_male(double val_male,double ave_male);
extern double var_online_male(double val_male,double ave_male);
extern double ave_online_female(double val_female,double ave_female);
extern double var_online_female(double val_female,double ave_female);

int N_male,N_female;
    
int main(void)
{
    double val_male,ave_male = 0,var_male;
    char fname_male[FILENAME_MAX];
    char buf_male[256];
    N_male = 0;
    FILE* fp_male;

    double val_female,ave_female = 0,var_female;
    char fname_female[FILENAME_MAX];
    char buf_female[256];
    N_female = 0;
    FILE* fp_female;

    double u;
    double t_denominator;
    double t_L=-2.1788,t_U=2.1788;
    double mu_L,mu_U;

    printf("input the filename of male sample:");
    fgets(fname_male,sizeof(fname_male),stdin);
    fname_male[strlen(fname_male)-1] = '\0';

    fp_male = fopen(fname_male,"r");
    if(fp_male==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }

    printf("input the filename of female sample:");
    fgets(fname_female,sizeof(fname_female),stdin);
    fname_female[strlen(fname_female)-1] = '\0';

    fp_female = fopen(fname_female,"r");
    if(fp_female==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }


    

    while(fgets(buf_male,sizeof(buf_male),fp_male) != NULL){
        sscanf(buf_male,"%lf",&val_male);
        N_male++;
        
        ave_male = ave_online_male(val_male,ave_male);
        var_male = var_online_male(val_male,ave_male);
    }
        
    while(fgets(buf_female,sizeof(buf_female),fp_female) != NULL){
        sscanf(buf_female,"%lf",&val_female);
        N_female++;
        
        ave_female = ave_online_female(val_female,ave_female);
        var_female = var_online_female(val_female,ave_female);
    }

       u = (var_male + var_female)/ (N_male + N_female -2);
       t_denominator = sqrt((u/N_male)+(u/N_female));

       mu_L = (ave_male-ave_female) - t_U * t_denominator;
       mu_U = (ave_male-ave_female) - t_L * t_denominator;

       printf("mu_L = %lf\nmu_U = %lf\n",mu_L,mu_U);

       if(mu_L <= 0 && mu_U >= 0){
           printf("result : equal\n");
       }
       else{
          printf("result : not equal\n"); 
       }
    
    return 0;


}

double ave_online_male(double val_male,double ave_male){
   ave_male=(ave_male*(N_male-1)+val_male)/N_male;
   return ave_male;
}

double var_online_male(double val_male,double ave_male){
    double var_male;
    static double square_ave_male = 0;
    
    square_ave_male = (square_ave_male*(N_male-1)+(val_male*val_male))/N_male;
    
    var_male = square_ave_male - (ave_male*ave_male);
    return var_male;
}

double ave_online_female(double val_female,double ave_female){
   ave_female=(ave_female*(N_female-1)+val_female)/N_female;
   return ave_female;
}

double var_online_female(double val_female,double ave_female){
    double var_female;
    static double square_ave_female = 0;
    
    square_ave_female = (square_ave_female*(N_female-1)+(val_female*val_female))/N_female;
    
    var_female = square_ave_female - (ave_female*ave_female);
    return var_female;
}