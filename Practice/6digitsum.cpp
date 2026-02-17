#include<iostream>
using namespace std;
int sumofdigit(int n){
    int digitsum=0;
    while(n>0){
        
        int ld=n%10;
        n/=10;
        digitsum+=ld;
    }
    return digitsum;
}
int main()
{
    cout<<"sum="<<sumofdigit(2345);
   return 0;
}