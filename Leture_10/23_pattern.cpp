
// 3
// 3 2 * 
// 3 * 1 
// * 2 1 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            if(i==j){
                cout<<"* ";
            }
            else{
            cout<<j<<" ";
            }
        }
        cout<<endl;
    }
   return 0;
}