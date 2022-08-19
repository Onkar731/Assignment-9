/* Write a menu driven program with the following options 
    a. Addition
    b. Subtraction
    c. Multiplication
    d. Division
    e. Exit
*/

#include<stdio.h>
#include<stdlib.h>
int main() {

    char ch;
    int n1, n2;

    while(1){
        printf("\na. Addition");
        printf("\nb. Subtraction");
        printf("\nc. Multiplication");
        printf("\nd. Division");
        printf("\ne. Exit");

        fflush(stdin);
        printf("\nEnter your choice : ");
        scanf("%c", &ch);

        switch(ch){

        case 'a':
                    printf("Enter two numbers : ");
                    scanf("%d%d", &n1, &n2);
                    printf("Addition = %d\n", n1+n2);
                    break;
        case 'b':
                    printf("Enter two numbers : ");
                    scanf("%d%d", &n1, &n2);
                    printf("Subtraction = %d\n", n1-n2);
                    break;
         case 'c':
                    printf("Enter two numbers : ");
                    scanf("%d%d", &n1, &n2);
                    printf("Multiplication = %d\n", n1*n2);
                    break;
        case 'd':
                    printf("Enter two numbers : ");
                    scanf("%d%d", &n1, &n2);
                    printf("Division = %d\n", n1/n2);
                    break;
        case 'e':
                    exit(0);
                    break;
        default:
                    printf("Invalid Choice");
        }
    
    }

    return 0;
}