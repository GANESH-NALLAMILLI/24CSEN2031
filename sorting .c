// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c,d, temporary;
    printf("enter any three numbers to be sorted in ascending order: ");
    scanf(" %d %d %d",&a,&b,&c); // give space between the numnbers.
    printf("\n before sorting: a=%d, b=%d, c=%d", a,b,c);
    if(a>b)
    {
          temporary=a;
          a=b;
          b=temporary;
    }
    if(c<a){
         printf("\n after sorting a=%d,b=%d,c=%d",c,a,b);
    }
    if(c>b){
         printf("\n after sorting a=%d, b=%d, c=%d",a,b,c);
    }
    if (a<c>b){
         printf("\n after sorting a=%d, b=%d, c=%d", a,c,b);
    }
   
     return 0;  
    }
*/ output
enter any three numbers to be sorted in ascending order: 586
562
854

 before sorting: a=586, b=562, c=854
 after sorting a=562, b=586, c=854
 */
