#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"enter a number: ";
 cin>>n;
 int a=1, b=1 , sum = 0;
  for(int i=1; i<=n-2; i++){  //maine start hi 3rd term se kiya hai isiliye n-2 karna pad rha hai......
  sum = a + b;  //sum = 2 // (n-2)
  a = b;
  b = sum;
  }
cout<<b;  //for n=1 & 2 => 0 instead of sum we'll use b

}