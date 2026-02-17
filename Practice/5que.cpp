#include<iostream>
using namespace std;
int fac(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main()
{
    cout<<fac(4)<<endl;
    cout<< fac(5);
   return 0;
}