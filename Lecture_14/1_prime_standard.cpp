#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool ans=true;
    //hum phle se asume kr rhe hai ki num prime hoga
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            ans=false;
        }
    }
    if(ans){
        cout<<"prime hai";
    }
    else{
        cout<<"prime nhi hai";
    }
   return 0;
}