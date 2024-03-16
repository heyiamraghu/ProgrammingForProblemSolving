#include <string.h>
// rateslab is a function that I created as a separate function, so this main function file looks clean and crisp
#include "./rateslab.h"

#define BUFFER_SIZE 24

int main()
{
    // Declaring all the necessary variables
    float rate_slab;
    float units;
    float min_charge = 100.0;
    char firstname[BUFFER_SIZE];
    char lastname[BUFFER_SIZE];
    float total;
    float grandtotal;

    // Getting the first name
    printf("Enter your first name: ");
    fgets(firstname, sizeof(firstname), stdin);

    // Getting the last name
    printf("Enter your last name: ");
    fgets(lastname, sizeof(lastname), stdin);

    // Prompting the user to enter the units consumed
    printf("Hey, %sEnter the units consumed: ", firstname);
    scanf("%f", &units);

    // Using the rateslab function to determine per unit pricing slab
    rate_slab = rateslab(units);
    total = min_charge + (rate_slab * units);
    if (total > 400)
    {
        grandtotal = (total * .15) + total;
        printf("As your bill is above 400, you have incurred addition 15 percent. Your EB bill is %f\n", grandtotal);
    }
    else
    {
        printf("As your bill is below 400, you have saved 15 percent fare. Your EB bill is %f\n", total);
    }

    return EXIT_SUCCESS;
}
