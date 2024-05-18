//write a program to input month
//number and print total number of 
// days in month using switch case

#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter month number : ";
cin>>x;
// switch(x){
//  case 1:  //Jan
//     cout<<"31";
//     break;
//  case 2: //feb
//     cout<<"28";
//     break;
//  case 3: //mar
//     cout<<"31";
//     break;
//  case 4:  //apr
//     cout<<"30";
//     break;
//  case 5: //may
//     cout<<"31";
//     break;
//  case 6: //june
//     cout<<"30";
//     break;
//  case 7:  //Jul
//     cout<<"31";
//     break;
//  case 8: //aug
//     cout<<"31";
//     break;
//  case 9: //sep
//     cout<<"30";
//     break;
//  case 10:  //oct
//     cout<<"31";
//     break;
//  case 11: //nov
//     cout<<"30";
//     break;
//  case 12: //dec
//     cout<<"31";
//     break;

//   default:
//   cout<<"invalid number";

// }

// 1 3 5 7 8 10 12 -> 30 days
// 4 6 9 11 -> 31 days
// 2 -> 28 days

switch ((x<=7 && x%2!=0) || (x>=8 && x%2==0)) {
    case 1:
    cout<<"31";
}
switch (x==4 || x==6 || x==9 || x==11){
    case 1:
    cout<<"30";
}
switch(x){
    case 2:
    cout<<"28";
}

}