#include<iostream>
using namespace std;
int main()
{
   int n,sum=0;
   cin>>n;
   for(int i=1;i<=n;i++){
  sum=sum+n%10;
  n=n/10;
   }
 cout<<sum;
   return 0;
}