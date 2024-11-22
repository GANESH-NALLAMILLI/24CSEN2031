// pointers( find value of i and its address)
# include <stdio.h>

int main() {
    int i;
    printf("enter the value of i: ");
    scanf("%d",&i);
    printf("Value of i : %d and its address: %u", i, &i);
   
    int *ptr_i;
    ptr_i = &i;
    printf("\nValue of ptr_i : %u and value pointed by the pointer is : %d", ptr_i, *ptr_i);

    return 0;
}



/* output
enter the value of i: 10
Value of i : 10 and its address: 1319871508
Value of ptr_i : 1319871508 and value pointed by the pointer is : 10*/
