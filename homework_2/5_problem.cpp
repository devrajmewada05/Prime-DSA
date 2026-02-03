#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=2;j<=i-1;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n-i-1;j++){

            if(j%j==0 and j%1==0){
                cout<<j<<" ";
            }

        }
        cout<<endl;
    }
   return 0;
}