// program using break function
#include <stdio.h>

int main() {
    int i=-2;
    while(i<10){
   
        if(i>0){
           printf("+");
       }
       printf("%d\n", i++);
        if(i==5){
        break;
        }
    }
   

    return 0;
}

/* output

-2
-1
0
+1
+2
+3
+4 */
