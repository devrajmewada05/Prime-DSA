#include<iostream>
using namespace std;
int main()
{
    int sal,year,bons;
    cin>>sal;
    cin>>year;
    if(year>=5){
        bons=(sal*10)/100;
        cout<<bons;
    }
    else{
        cout<<"No Bonus";
    }
   return 0;
}