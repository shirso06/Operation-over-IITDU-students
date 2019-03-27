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
void menu(){

    int n;
    printf("Press 1 to see all students' profile\n");
    printf("Press 2 to view selected student(s)' profile(s)\n");
    printf("Press 3 to calculate result\n");

    scanf("%d",&n);


    if(n==1){
        print_full_profile();
    }
    else if(n==2){
        find_student();
    }
    else if(n==3){
        cgpa();
    }
    else{
        printf("\n\nThe full data set is not ready yet.\n Thank you for your patience\n\n");
    }



return;


}
