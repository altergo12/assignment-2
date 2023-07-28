#include <stdio.h>
#include <stdlib.h>

int max(long unsigned int);
int finding_base(long unsigned int);

int i, n, max_digit, base;

int finding_base(long unsigned int random)
{
    max_digit = max(random);
    base = max_digit + 1;
    return base;
}

int max(long unsigned int num)
{

    int r, large = 0; // r=remainder
    while (n != 0)
    {
        r = n % 10;
        if (r > large)
        {
            large = r;
        }
        n = n / 10;
    }
    return large;
}

int main()
{
long unsigned int array[50]; //generate random 50 array
    int i;
    long unsigned int random_number;
    int last_base;

    for (i = 0; i < 50; i++) // generating an array consisting of 50 random numbers
    {
        array[i] = rand() % 500 + 5000000000;
    }

    printf("the list of numbers:\n"); // printing the array
    for (i = 0; i < 50; i++)
    {
        printf("%lu\n", array[i]);
    }

    printf(" \n\n ");

    for (i = 0; i < 50; i++)
    {
        random_number = array[i];                // storing each element of array in a integer variable 'random_number'
         last_base = finding_base(random_number); // calling the function and storing the result(base) in final_base
        printf("the Highest base of number %lu is %d\n", array[i], last_base);
    }
    return 0;
}