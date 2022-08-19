/* WAP to find all roots of a quadratic equation using switch case */

#include<stdio.h>
#include<math.h>
int main(){

    double a, b, c, discriminant, r1, r2;

    printf("Enter three numbers : ");
    scanf("%lf%lf%lf", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    switch(discriminant > 0){
        case 1:
                r1 = (-b - sqrt(discriminant))/(2*a);
                r2 = (-b + sqrt(discriminant))/(2*a);
                printf("root1 = %.2lf root2 = %.2lf", r1, r2);
                printf("\nReal and Different roots");
                break;
        default:
                switch(discriminant == 0){
                    case 1:
                            r1 = -b / 2*a;
                            r2 = -b / 2*a;
                            // roots are real and equal so that both has same value.
                            // we can also assign value of r1 to r2
                            // because both are equal roots.
                            // r2 = r1;
                            printf("root1 = %.2lf root2 = %.2lf", r1, r2);
                            printf("\nReal and Equal roots");
                            break;
                    default:
                            r1 = -b / (2*a);
                            r2 = sqrt(-discriminant)/(2*a);
                            printf("root1 = %.2lf+%.2lfi root2 = %.2lf-%.2lfi", r1,r2,r1,r2);
                            printf("\nImaginary or Complex roots");
                }
                

    }
    return 0;
}