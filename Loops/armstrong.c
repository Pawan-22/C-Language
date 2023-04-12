#include <stdio.h>

#include <math.h>

int main()
{
    int Number, Temp, Reminder, count = 0, Sum = 0;

    printf("\nPlease Enter number to Check \n");
    scanf("%d", &Number);

    
    Temp = Number;
    while (Temp != 0)
    {
        count = count + 1;
        Temp = Temp / 10;
    }

    Temp = Number;
    while (Temp > 0)
    {
        Reminder = Temp % 10;
        Sum = Sum + pow(Reminder, count);
        Temp = Temp / 10;
    }

    printf("\n Sum of entered number is = %d\n", Sum);

    if (Number == Sum)
        printf("\n %d is Armstrong Number.\n", Number);
    else
        printf("\n %d is not.\n", Number);

    return 0;
}