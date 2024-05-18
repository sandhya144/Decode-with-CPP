#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    int product=1; // multiplicative factor
    for (int i=1; i<=n; i++){
    product *= i;
    }
    cout<<product;

//   int fact = 1;
//   int product = 1;
//   for(int i=1; i<=n; i++){
//    product *= i;
//    fact = n * (n-1);
// }
//   cout<<fact;

}