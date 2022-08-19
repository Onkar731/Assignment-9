/* Write a menu driven program with the following options:

    a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
    b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
    c. Check whether a given set of three numbers are equilateral triangle or not
    d. Exit
*/

#include<stdio.h>
#include<stdlib.h>
int main(){

    int l1, l2, l3;
    int greater;
    char ch;

    while(1){
        printf("\na. Check whether a given set of three numbers are lengths of an isosceles triangle or not");
        printf("\nb. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
        printf("\nc. Check whether a given set of three numbers are equilateral triangle or not");
        printf("\nd. Exit");

        fflush(stdin);
        printf("\nEnter your choice : ");
        scanf("%c", &ch);

        switch(ch){
            case 'a':
                        printf("\nEnter three numbers : ");
                        scanf("%d%d%d", &l1, &l2, &l3);
                        if(l1 == l2 && l2 != l3|| l2 == l3 && l3 != l1|| l3 == l1 && l1 != l2){
                            printf("Isosceles Triangle");
                        }
                        else{
                            printf("Not Isosceles Triangle");
                        }
                        break;
            case 'b':
                        printf("\nEnter three numbers : ");
                        scanf("%d%d%d", &l1, &l2, &l3);
                        if(l1*l1 == l2*l2 + l3*l3 || l3*l3 == l1*l1 + l2*l2 || l2*l2 == l1*l1 + l3*l3){
                            printf("Right Angle Triangle");
                        }
                        else{
                            printf("Not Right Angle Triangle");
                        }  
                        break;
            case 'c':
                        printf("\nEnter three numbers : ");
                        scanf("%d%d%d", &l1, &l2, &l3);
                        if(l1 == l2 && l2 == l3 && l1 == l3){
                            printf("Equilateral Triangle");
                        }else{
                            printf("Not Equilateral Triangle");
                        }
                        break;
            case 'd':
                        exit(0);
            default: 
                        printf("Invalid Choice");
        }
    }

    return 0; 
}