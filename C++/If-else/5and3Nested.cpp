#include <iostream>
using namespace std;
int main (){
cout<<"enter an integer: ";
int n;
cin>>n;
if(n%5==0){
    if (n%3==0){
        cout<<"no is divisible by 5 and 3 both ";
    }
    else{
      cout<<"no is divisible by 5 but not 3 "; 
    }
}

else{
      cout<<"not matching the codition "; 
    }

}

