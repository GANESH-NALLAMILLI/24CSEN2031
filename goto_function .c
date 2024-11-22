// program to print digits in reverse order in a +ve integer number using goto function

#include <stdio.h>

int main() {
   int a,b,c,sum=0;
   printf("enter any number to be reversed: ");
   scanf("%d",&c);
   a=c;
   printf("\n\n");
   printf("after reversing:\n ");
   
   logic:
       b=a%10;
       a=a/10;
       printf("\n%d",b);
   if(a>=1){
       goto logic;
   }
   
 
   return 0;
}


/* output

enter any number to be reversed: 5236


after reversing:
 
6
3
2
5   */
