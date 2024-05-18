#include  <iostream>
using namespace std;
int main(){
char ch;
cout<<"enter the character : ";
cin>>ch;
// a to z -> 97 to 122
// a to z -> 65 yo 90
int ascii = (int)ch;
// if (ascii>=97 && ascii<=122){
//     cout<<"the character is in lowercase alphabet ";

// }
// if (ascii>=65 && ascii<=90){
//     cout<<"the character is in uppercasealphabet ";

//}
if ((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
 cout<<"the character is alphabet ";
}
else{
    cout<<"the character is not an alphabet";
}
}