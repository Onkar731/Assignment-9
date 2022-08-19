/* Write a program to convert even number into its upper nearest odd number using switch statement */

#include<stdio.h>

int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    switch(num % 2){
        case 0:
                num++;
    }

    printf("Nearest odd number is %d", num);

    return 0;
}