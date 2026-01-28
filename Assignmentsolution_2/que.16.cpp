#include<iostream>
using namespace std;
int main()
{
   int N;
   cin>>N;
   int a =0,b=1;
   int k;
   for(int i=1;i<=N;i++) {
    for(int j=1;j<=i;j++){
        cout<<a<<" ";
        k= a+b;
        a=b;
        b=k;
    }
    cout<<endl;
   }
   return 0;
}