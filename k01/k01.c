#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

extern double ave_online(double val,double ave);
extern double var_online(double val,double ave);

int N;
    
int main(void)
{
    double val,ave=0,var;
    char fname[FILENAME_MAX];
    char buf[256];
    N=0;
    FILE* fp;

    printf("input the filename of sample:");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1] = '\0';
    printf("the filename of sample: %s\n",fname);

    fp = fopen(fname,"r");
    if(fp==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }

    while(fgets(buf,sizeof(buf),fp) != NULL){
        sscanf(buf,"%lf",&val);
        N++;
        
        ave = ave_online(val,ave);
        var = var_online(val,ave);
    }
        
    if(fclose(fp) == EOF){
        fputs("file close error\n",stderr);
        exit(EXIT_FAILURE);
    }


    printf("sample  average: %lf\n",ave);
    printf("sample variance: %lf\n",var);
    printf("population  average: %lf\n",ave);
    printf("population variance: %lf\n",var*N/(N-1));
    
    return 0;


}

double ave_online(double val,double ave){
   ave=(ave*(N-1)+val)/N;
   return ave;
}

double var_online(double val,double ave){
    double var;
    static double square_ave = 0;
    
    square_ave = (square_ave*(N-1)+(val*val))/N;
    
    var = square_ave - (ave*ave);
    return var;
}