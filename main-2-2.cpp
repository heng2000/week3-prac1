#include<iostream>
using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);
int main ()
{
    int array[7]={1,0,0,1,0,1,1};
    int result =0;
    result =bin_to_int(array,7);
    cout<<result<<endl;
    return 0;
}
