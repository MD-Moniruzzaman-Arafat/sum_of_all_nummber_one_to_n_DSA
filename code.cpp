#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;
    cout << "number of n : ";
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        sum = sum + (i + 1);
    }
    cout << " total sum is : " << sum;

    return 0;
}