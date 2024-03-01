#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter the number to find even or odd: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("The number %d is an even number.\n", number);
    }
    else
    {
        printf("The number %d is an odd number.\n", number);
    }

    return EXIT_SUCCESS;
}
