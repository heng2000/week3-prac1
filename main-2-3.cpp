#include<iostream>
using namespace std;
extern int sum_integers(int integers[], int length);

int main ()
{
    int array[5]={-1,2,2,-1};
    int result  =0;
    result =sum_integers(array,4);
    cout<<result<<endl;
    return 0;
}