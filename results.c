#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "test.h"

void cgpa(){

    struct result{
            char roll[9];
            char course_code[7];
            int semester;
            int cn[6];
            float cng[6];
    }sr[3];

    float destroyer=0.00,cgpa;

    for(int i=0;i<3;i++){
        printf("\nEnter Roll: ");
        scanf("%s",sr[i].roll);
        printf("\nEnter semester (1-8 except 7): \n");
        scanf("%d",&sr[i].semester);
        printf("\nProvide the marks of 6 courses: ");
        for(int j=0;j<6;j++){
            printf("\nCourse SE%d0%d: ",sr[i].semester,j+1);
            scanf("%d",&sr[i].cn[j]);
            if(sr[i].cn[j]>=80){
                sr[i].cng[j]=4.00;
            }
            else if(sr[i].cn[j]>=75&&sr[i].cn[j]<80){
                sr[i].cng[j]=3.75;
            }
            else if(sr[i].cn[j]>=70&&sr[i].cn[j]<75){
                sr[i].cng[j]=3.50;
            }
            else if(sr[i].cn[j]>=65&&sr[i].cn[j]<70){
                sr[i].cng[j]=3.25;
            }
            else if(sr[i].cn[j]>=60&&sr[i].cn[j]<65){
                sr[i].cng[j]=3.00;
            }
            else if(sr[i].cn[j]>=55&&sr[i].cn[j]<60){
                sr[i].cng[j]=2.75;
            }
            else if(sr[i].cn[j]>=50&&sr[i].cn[j]<55){
                sr[i].cng[j]=2.50;
            }
            else if(sr[i].cn[j]>=45&&sr[i].cn[j]<50){
                sr[i].cng[j]=2.25;
            }
            else if(sr[i].cn[j]>=40&&sr[i].cn[j]<45){
                sr[i].cng[j]=2.00;
            }
            else{
                sr[i].cng[j]=0.00;
            }

        }
    }

    printf("\n\n\n\n\n\n\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            destroyer+=sr[i].cng[j]*3;
        }
            cgpa=destroyer/18;
        printf("The cgpa of Roll %s:\t%2f\n\n",sr[i].roll,cgpa);
        destroyer=0.00;
    }
    printf("\n\n\n\n\n\n\n\n\n\n");
}

