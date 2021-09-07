#include<stdio.h>
int main()
{
    int value,year,weeks,days;
    printf("Enter the Input(number of days) : ");
    scanf("%d", &value);
    year = (value/365);
    weeks = ((value%365)/7) ;
    days = ((value%365)%7);

    printf(" Years : %d\n Weeks : %d\n Days : %d", year, weeks,days);
    return 0;
}
