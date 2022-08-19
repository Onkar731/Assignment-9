/* WAP to convert a positive number into a negative number and 
   negative number into positive number using a switch statement
*/

#include<stdio.h>
int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Before conversion = %d", num);
    switch((num > 0)){
        case 1:
                num = -num;
                break;
        case 0:
                num = -num;
                break;
    }

    printf("\nAfter conversion = %d", num);
    return 0;
}