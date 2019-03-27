#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "test.h"

struct student{
                    char name[22];
                    char address[82];
                    char roll[10];
                    int regno;
                    }s[3];
void find_student(){
    int n;
    char a[3],b[3],temp[9];
    printf("Press 1 to view students' infos batch-wise: \n");
    printf("Press 2 to view a specific student's information: \n");

    scanf("%d",&n);
    if(n==1){
        printf("Please provide the batch serial number\n");

        scanf("%s",a);

        for(int i=0;i<3;i++){
            strcpy(temp,s[i].roll);
            b[0]=temp[4];b[1]=temp[5];b[2]='\0';
            if(strcmp(b,a)==0){
                    printf("NAME OF %d: %s",i+1,s[i].name);
                    printf("ADDRESS OF %d: %s",i+1,s[i].address);
                    printf("ROLL OF %d: %s",i+1,s[i].roll);
                    printf("\nREGNO OF %d: %d\n\n",i+1,s[i].regno);
                    temp[4]='\0';temp[5]='\0';
                    continue;
            }
        }
    }

    else if(n==2){
        printf("Please provide the roll number of the student: \n");
        scanf("%s",temp);
        for(int i=0;i<3;i++){
            if(strcmp(temp,s[i].roll)==0){
                printf("NAME OF %d: %s",i+1,s[i].name);
                printf("ADDRESS OF %d: %s",i+1,s[i].address);
                printf("ROLL OF %d: %s",i+1,s[i].roll);
                printf("\nREGNO OF %d: %d\n\n",i+1,s[i].regno);
            }
        }
    }
}
