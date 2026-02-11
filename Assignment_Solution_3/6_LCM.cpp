#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int l=n1*n2;
    for(int i=1;i<=l;i++){
        if(i%n1==0 and i%n2==0){
            cout<<i<<endl;
            break;
        }
    }
    
   return 0;
}