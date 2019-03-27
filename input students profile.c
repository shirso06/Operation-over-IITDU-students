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

void input_students_profile(){
    fflush(stdin);

   /* for(int i=0;i<3;i++){

        fflush(stdin);
        printf("Input Name:\n");
        fgets(s[i].name,sizeof(s[i].name),stdin);


        printf("Input Address:\n");
        fgets(s[i].address,sizeof(s[i].address),stdin);

        printf("Input Roll:\n");
        scanf("%s",&s[i].roll);

        printf("Input Registration no.:\n");
        scanf("%d",&s[i].regno);
        fflush(stdin);

    }
    fflush(stdout);*/

    FILE* ptr=fopen("students'_profiles.txt","w");
    for(int i=0;i<3;i++){
        printf("Input Name:\n");
        fgets(s[i].name,sizeof(s[i].name),stdin);
        fputs(s[i].name,ptr);

        printf("Input Address:\n");
        fgets(s[i].address,sizeof(s[i].address),stdin);
        fputs(s[i].address,ptr);

        printf("Input Roll:\n");
        fgets(s[i].roll,sizeof(s[i].roll),stdin);
        fputs(s[i].roll,ptr);

        printf("Input Registration no.:\n");
        scanf("%d\n\n",&s[i].regno);
        fprintf(ptr,"%d",s[i].regno);
        fflush(stdin);
    }
    fclose(ptr);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    return;
}
