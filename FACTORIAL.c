// FACTORIAL NUMBER.
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c=1,i,j,d;
    printf("enter any number: ");
    scanf("%d",&a);
   
    for(i=a;i>a-1;i--){
        b=i*(i-1);
        c=b;
    }
    for(j=a-2;j>=1;j--){
        c=c*j;
       
    }
   
    printf("factorial of entered number is %d",c);

    return 0;
}


/* output

enter any number: 3
factorial of entered number is 6*/
