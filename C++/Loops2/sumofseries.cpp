#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter: ";
cin>>n;
int sum=0;
// for(int i=1; i<=n; i++){
//  if(i%2!=0) sum=sum+i;  //sum += i;
//  else sum=sum-i;  //sum -= i;

// }
if(n%2==0) sum = -n/2;
else sum = (-n/2)+ n;


cout<<sum;
//1-2+3-4+5....
}