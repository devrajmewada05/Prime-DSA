#include<iostream>
using namespace std;
int main()
{
    int n,revers=0,digit;
    cin>>n;
    while(n>0){
        digit = n%10;
    revers=revers*10+digit;
    n=n/10;
    }
    cout<<revers;

   return 0;
}