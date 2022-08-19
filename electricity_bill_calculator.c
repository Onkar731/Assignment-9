/* 
   Write a program to take the value from the user as input electricity unit charges and calculate total
   electricity bill according to the given condition. Using the switch statement

   For the first 50 units Rs. 0.50/unit
   For the next 100 units Rs. 0.75/unit
   For the next 100 units Rs. 1.20/unit
   For the units above 250 Rs. 1.50/unit

   An additional surcharge of 20% is added to the bill
*/

#include<stdio.h>

int main(){

    int unit, sum = 0;
    float totalbill;

    printf("Enter electricity unit : ");
    scanf("%d", &unit);

    switch(unit >= 50){
        case 1:
                sum += 25;
                unit -= 50;
                switch(unit >= 100){
                    case 1:
                            sum += 75;
                            unit -= 100;
                            switch(unit >= 100){
                                case 1:
                                        sum += 120;
                                        unit -= 100;
                                        switch(unit > 0){
                                            case 1:
                                                    sum += (unit * 1.50);
                                                    break;
                                        }
                                        break;
                           }
                            break;       
                }
                break;
        default:
                sum = unit * 0.50;
    }

    totalbill = sum + sum * 0.2;

    printf("Total Electricity Bill = %.2f", totalbill);

    return 0;
}