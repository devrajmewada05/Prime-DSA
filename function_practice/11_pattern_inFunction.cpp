#include<iostream>
using namespace std;
void fun(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            if(j==1){
                cout<<"0 ";
            }
            else{
                cout<<n-j<<" ";
             }
        }
        // for(int j=i;j>=1;j--){
        //         cout<<n-j+1<<" ";
        // }
        cout<<endl;
    }
   
}
int main()
{
    fun(10);
   return 0;
}