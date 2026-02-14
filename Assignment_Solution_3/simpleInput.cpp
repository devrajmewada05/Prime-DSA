// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=1;i<=n;i++){
//         cin>>arr[i];
//         if(arr[i]>0){
//             cout<<arr[i]<<endl;
//         }
//         else{
//             break;
//         }
//     }
// 	return 0;
// }
#include<iostream>
using namespace std;
int main() {
	int n;
	while(cin>>n){
        if(n>0){
		cout<<n<<endl;
	  }
	  else{
		break;
	  }
	}	
	return 0;
}