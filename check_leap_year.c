/* WAP to check whether a year is a leap year or not. Using switch statement */

#include<stdio.h>
int main(){

    int year;

    printf("Enter year : ");
    scanf("%d", &year);

    switch(year % 4){
        case 0:
                switch(year % 100){
                    case 0:
                            printf("Not Leap Year");
                            break;
                    default:
                            printf("Leap Year");
                }
                break;
        default:
                printf("Not Leap Year");
    }

    return 0;
}