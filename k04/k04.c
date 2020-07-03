#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct PERSON_DATA{
    int sample_ID;
    int gender;
    double height;
};
struct PERSON_DATA x[15] ; 


int main(void)
{
    char fname_height[FILENAME_MAX];
    char buf_height[256];
    FILE* fp_height;

    char fname_ID[FILENAME_MAX];
    char buf_ID[256];
    FILE* fp_ID;
    
    int input_ID;
    int i;
    int u=0,t=0;
    int counter=0;

    printf("```\n");
    printf("input the filename of sample height :");
    fgets(fname_height,sizeof(fname_height),stdin);
    fname_height[strlen(fname_height)-1] = '\0';

    fp_height = fopen(fname_height,"r");
    if(fp_height==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }

    printf("input the filename of sample ID :");
    fgets(fname_ID,sizeof(fname_ID),stdin);
    fname_ID[strlen(fname_ID)-1] = '\0';

    fp_ID = fopen(fname_ID,"r");
    if(fp_ID==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }

    printf("Which ID's data do you want? :");
    scanf("%d",&input_ID);

    while(fgets(buf_height,sizeof(buf_height),fp_height) != NULL){
        sscanf(buf_height,"%d, %lf",&x[u].gender,&x[u].height);

        u++;
    }
    
    while(fgets(buf_ID,sizeof(buf_ID),fp_ID) != NULL){
        sscanf(buf_ID,"%d",&x[t+1].sample_ID);

        t++;
    }



    for(i=0;i<15;i++){
         if(input_ID == x[i].sample_ID){
             printf ("ID : %d\n",x[i].sample_ID);
        
             if(x[i].gender == 1){
                 printf ("gender : Male \n" );
                }
              else if(x[i].gender == 2){
                 printf ("gender : Female \n" );
                }    
               printf("height : %.1lf\n",x[i].height);
               counter++;
        }  
         
    }
    
    if(counter == 0){
        printf("---\n");
        printf("No data\n");
        printf("```\n");
    }

    
    
    return 0;
}

    

