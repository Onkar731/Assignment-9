/* WAP which takes the month number as an input and display number of days in that month. */

#include<stdio.h>
int main(){

    int month_no;

    printf("Enter month number : ");
    scanf("%d", &month_no);

    switch (month_no)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31");
            break;
    case 4: case 6: case 9: case 11:
            printf("30");
            break;
    case 2:
            printf("28");
            break;
    default:
            printf("Invalid Month Number");
    }

    return 0;
}