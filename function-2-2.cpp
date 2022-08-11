
#include<cmath>
using namespace std;
int bin_to_int(int binary_digits[], int number_of_digits);

int bin_to_int(int binary_digits[], int number_of_digits)
{
    int number =0;
    for(int i =number_of_digits - 1;i>=0;i--)
    {
        number += pow(2,(number_of_digits-i - 1))*binary_digits[i];
    }
    return number;
}


