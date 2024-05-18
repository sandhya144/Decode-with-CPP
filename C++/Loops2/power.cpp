#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter base : ";
cin>>a;
cout<<"enter exponent : ";
cin>>b;
bool flag = true; //true means positive power
if(b<0){
  flag = false;  // negative power
  b = -b;
}

float exponent = 1;
for(int i=1; i<=b; i++){
   exponent = exponent*a;
}

if(flag==false){
  exponent = 1/exponent;
  b = -b;
}
  if(a==0 & b==0) cout<<"not defined";
  else cout<<a<<" raised to the power "<<b<<" is "<<exponent;

}