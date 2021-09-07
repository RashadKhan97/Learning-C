#include<stdio.h>
int main()
{
    int first_number, second_number, temp_number;
    printf("Enter the first number and second number here: ");
    scanf("%d  %d", &first_number, &second_number);
    printf("\nBefore Swapping first_number : %d", first_number);
    printf("\nBefore Swapping second_number : %d", second_number);

    temp_number = first_number ;
    first_number = second_number;
    second_number = temp_number;

    printf("\n\nAfter swapping first_number: %d", first_number);
    printf("\nAfter swapping second_number: %d", second_number);
}
