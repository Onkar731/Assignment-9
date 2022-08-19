/* Convert the following if-else-if construct into switch case */

#include<stdio.h>
int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    switch(num){
        case 1:
                printf("Good");
                break;
        case 2:
                printf("Better");
                break;
        case 3:
                printf("Best");
                break;
        default:
                printf("Invalid");
    }

    return 0;
}