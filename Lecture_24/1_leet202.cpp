#include<iostream>
using namespace std;
int main()
{
    class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
     if(n==1 or n==7)   {
        return true;
     }
     else if(n<10){
        return false;
     }
     else{
        
        while(n!=0){
            int r=n%10;
            sum+=r*r;
            n/=10;
        }
     }
     return isHappy(sum);
    }
};
   return 0;
}