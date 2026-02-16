// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//    while(n!=0){
//     int r=n%10;
//     int d=9-r;
//     if(r>d){
//         cout<<d;
//     }
//     else{
//         cout<<r;
//     }
//     n=n/10;
// }
//    return 0;
// }
#include<iostream>
using namespace std;
int len(int n){
    int ans=0;
    while(n!=0){
    n=n/10;
    ans++;
    }
    return ans;
}
int reve(int n){
    int reve=0;
    while(n!=0){
        int r=n%10;
        reve=reve*10+r;
        n=n/10;
    }
    return reve;
}
int main()
{
    int n;
    cin>>n;
    int l=len(n);
    int rev=1;
    while(n!=0){
        int r=n%10;
        int inv=9-r;
        if(l==1 and inv==0){
            rev=rev*10+r;
            l--;
        }
        if(inv<r){
            rev=rev*10+inv;
            l--;
        }
        else{
            rev=rev*10+r;
            l--;
        }
        n=n/10;
    }
    cout<<reve(rev)/10<<endl;
   return 0;
}