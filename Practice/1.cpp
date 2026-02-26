#include<iostream>
using namespace std;
int main()
{
    int array[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int g=sizeof(array)/(sizeof(int)*sizeof(int));
    int h=sizeof(array[0])/sizeof(int);
   return 0;
}