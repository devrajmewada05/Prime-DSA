#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int odd=0;
    int even=0;
    while(n!=0){
        int k=n%10;
        odd+=k;
        n/=10;
        k=n%10;
        even+=k;
        n/=10;
    }
    cout<<odd<<endl;
    cout<<even<<endl; 
   return 0;
}