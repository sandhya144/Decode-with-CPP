#include <iostream>
using namespace std;
int main(){
  cout<<"enter cost price: ";
  int cp;
  cin>>cp;
  cout<<"enter selling price: ";
  int sp;
  cin>>sp;
  if(sp>cp){
    cout<<"profit = "<<sp-cp;
  }
//    else{   // sp<=cp
//     cout<<"loss";
//  }

if (cp>sp){
    cout<<"loss = "<<cp-sp;
}
if(sp == cp){
   cout<<"No Profit, No Loss!";
}

}