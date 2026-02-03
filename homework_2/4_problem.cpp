#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){ 
            if(i==1 || j==1 || i==n || j==n){
                cout<<"1 ";
            }
            else if(i==(n+1)/2 and j==(n+1)/2){
                cout<<i+j<<" ";
            }
            else if(i==(n+1)/2){
                cout<<i<<" ";
            }else if(i<(n+1)/2){
                cout<<j<<" ";
            }else {
                cout<<n-j+1<<" ";
            }
        }
        cout<<endl;
    }
   return 0;
}