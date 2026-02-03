#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=1 and i!=n and j!=1 and j!=n){
                if(i==(n+1)/2 and j==(n+1)/2){
                    cout<<"@ ";
                }
                else{
                    cout<<"# ";
                }
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
   return 0;
}