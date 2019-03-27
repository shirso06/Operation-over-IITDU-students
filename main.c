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

int main()
{
    printf("STUDENTS' PROFILES OF IITDU\n___________________________\n___________________________\n\n\n");

    menu();
    return 0;
}
