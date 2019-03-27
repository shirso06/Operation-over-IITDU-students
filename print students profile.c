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

void print_full_profile(){
    //input_students_profile();
    char buffer[200];
    int regno_buff;
    /*for(int i=0;i<3;i++){
        fflush(stdin);
        printf("NAME OF %d: %s",i+1,s[i].name);
        printf("ADDRESS OF %d: %s",i+1,s[i].address);
        printf("ROLL OF %d: %s",i+1,s[i].roll);
        printf("\nREGNO OF %d: %d\n\n",i+1,s[i].regno);
        fflush(stdin);
    }*/


    FILE* ptr=fopen("students'_profiles.txt","r");

    for(int i=0;i<3;i++){

        /*if(feof(ptr)){
                break;
            }

printf("%d\n\n",sizeof(s[i].name));
        fread(name_buff,strlen(s[i].name),1,ptr);
        printf("%s",name_buff);

        fread(address_buff,strlen(s[i].address),1,ptr);
        printf("%s",address_buff);

        fread(roll_buff,strlen(s[i].roll),1,ptr);
        printf("%s",roll_buff);

        fscanf(ptr,"%d",&regno_buff);
        printf("\n%d\n\n",regno_buff);

        fflush(stdin);

        if(feof(ptr)){
                break;
            }*/

            while(!feof(ptr)){
                fgets(buffer,200,ptr);
                puts(buffer);
            }

    }
}
