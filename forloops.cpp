#include <iostream>
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
}