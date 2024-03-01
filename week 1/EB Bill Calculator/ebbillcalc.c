/*
This program identifies rate slab and then calculates your electricity bill.
How to run this program: please ensure that your Terminal is in the same path as this program lives.
step 1: gcc ebbillcalc.c -o ebbillcalc
step 2: ./ebbillcalc

*/

#include "./rateslabfinder.h"

int main()
{
    int units;
    float rateperunit;
    float subtotal;
    float total;

    printf("Please enter the units consumed: ");
    scanf("%d", &units);
    rateperunit = rateslab(units);
    subtotal = rateperunit * units;
    if (subtotal >= 500)
    {
        total = (subtotal * .15) + subtotal;
        printf("Bill: %f. As you've consumed more electricity, you will incur additional 15 percent on your bill. Your final bill amount is: %f.\n", subtotal, total);
    }
    else
    {
        printf("The electricity bill for the past month is: %f\n", subtotal);
    }

    return EXIT_SUCCESS;
}
