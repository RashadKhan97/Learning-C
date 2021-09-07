#include<stdio.h>
int main()
{
    int a,b,c,add,minus,multiply,divide;
    printf("Enter the input here: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Initial Given Input: %d %d %d", a,b,c);

    add = (a+b);
    minus = (a-b);
    multiply = (a*c);
    divide = (b/c);
    printf("\nAfter add, minus, multiply and divide the output is: \n%d \n%d \n%d \n%d", add,minus,multiply,divide);
    return 0;
}
