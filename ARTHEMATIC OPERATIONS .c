// program to perform arithmetic operations using 3 variables.
#include <stdio.h>

int main() {
    int a,b,c;
    float f;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
   
    //arthematic operations (addition, subtraction, multiplication)
    c=a+b;
     printf("\n\nthe value of a+b is: %d" ,c);
    c=a-b;
     printf("\nthe value of a-b is: %d" ,c);
    c=a*b;
     printf("\nthe value of a*b is: %d" ,c);
     
     //arthematic operation (division)
     if (b!=0)
    {
        f=(float)a/b; // TYPECASTING is done by writting float before the instruction (a/b). by this we are converting the values of a and b into float forcefully.
        printf(" \nthe value of a/b is: %f", f);
    }
    else
    {
        printf(" the value of b is zero, therefore a/b can't be performed");
    }
    return 0;
}

*/ output

enter the value of a: 523
enter the value of b: 5236


the value of a+b is: 5759
the value of a-b is: -4713
the value of a*b is: 2738428 
the value of a/b is: 0.099885
*/
