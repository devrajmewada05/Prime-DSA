#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int n=(m+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=1;j++){
            if(i==j){
                cout<<"1 ";
            }
            else {
                cout<<i-1<<" ";
            }
        }
        for(int j=2;j<=2*i-2;j++){
            cout<<"  ";
        }
         for(int j=1;j<=i-i+1;j++){
            if(i!=j){
                cout<<i-1;
            }
        }
        cout<<endl;
    }
      for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i-i+1;j++){
            if(i==j){
                cout<<"1 ";
            }
            else {
                cout<<i-1<<" ";
            }
        }
        for(int j=2;j<=2*i-2;j++){
            cout<<"  ";
        }
         for(int j=1;j<=i-i+1;j++){
            if(i!=j){
                cout<<i-1;
            }
        }
        cout<<endl;
    }
   return 0;
}