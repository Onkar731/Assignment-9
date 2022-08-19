/* WAP which takes the day number of a week and displays a unique greeting message for the day */

#include<stdio.h>
int main(){

    int day_no;

    printf("Enter day number : ");
    scanf("%d", &day_no);

    switch(day_no)
    {
        case 1:
                printf("Wishing a Great Monday");
                break;
        case 2:
                printf("Wishing a Great Tuesday");
                break;
        case 3:
                printf("Wishing a Great Wednesday");
                break;
        case 4:
                printf("Wishing a Great Thursday");
                break;
        case 5:
                printf("Wishing a Great Friday");
                break;
        case 6:
                printf("Wishing a Great Saturday");
                break;
        case 7:
                printf("Wishing a Great Sunday");
                break;
        default :
                printf("Invalid Day Number");
    }

    return 0;
}