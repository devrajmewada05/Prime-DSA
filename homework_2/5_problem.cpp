#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int m=n*4;
    int mid=(n+1)/2;
    for(int i=1; i<=mid;i++){
        for(int j=1;j<=i-1;j++){
            cout<<"- ";
        }
       // for(int j=1)
        cout<<endl;
    }
   return 0;
}