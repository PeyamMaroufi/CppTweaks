#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int sum, i;

    /* First method */
    for (sum = 0, i = 0; i <= 100; sum += i++)
        ;
    cout << sum << endl;

    /* Second way of doing that shit. Notice the comma sign */
    for (sum = 0, i = 0; i <= 100; sum += i, i++)
        ;
    cout << sum << endl;

    /* Third way of doing same shit */
    sum = 0;
    for (i = 0; i <= 100; i++)
    {
        sum += i;
    }
    cout << sum << endl;

    /* Fibonacci numbers */
    int f_0, f_1, temp;
    cout << "\n\nFibonacci numbers one liner\n";
    for (f_0 = 0, f_1 = 1; f_0 <= 100; temp = f_1, f_1 += f_0, f_0 = temp, cout << f_1 << endl)
        ;

    /* Print the max random value and creating random numbers */
    cout << endl;
    cout << "Max value of random function is : " << RAND_MAX << " Random number generation" << endl;
    int random_integer;
    for (int d = 0; d < 15; random_integer = 5 + (rand() % (50 - 5 + 1)), cout << d << ") " << random_integer << endl, d++)
        ;
}