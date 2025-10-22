//    There are two types of header files
// 1.System header files: It comes with the compiler
// #include<iostream>
// 2.User defined header files : It is written by the programmer
// #include "<this.h>" //--> this will produce an error if this.h is not present in the current directory
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // int a=3,b=5;

    // cout << "the sum of a and b is :"<<a and b;

    //  cout<<"++a : "<<++a<<endl;

    //****************TYPECASTING*****************//

    // It is basically data conversion,like from int to double (or) float to int

    // float x=45.678, y=45;
    // cout<<"the value of expression is :"<<x+y<<endl;
    // cout<<"the value of expression is :"<<int(x)+y<<endl;
    // cout<<"the value of expression is :"<<(float)x+y<<endl;

    // Constant Operators

    // const int  a= 3;
    // cout<<"the value of a was:"<<a<<endl;
    // a=7; --> We will get an error because ais constant
    // cout<<"the value of now a is :"<<a<<endl;

    // *****************Manipulators**************
    // Manipulators help in the data which is displaying to get formatted
    // ex--> endl, and other in header file like iomanip
/*
    int a = 3, b = 67, c = 7890;
    cout << "the value of is:" << a << endl;
    cout << "the value of b is:" << b << endl;
    cout << "the value of c is:" << c << endl;

    cout << "the value of a with setw is: " << setw(4) << a << endl;
    cout << "the value of b with setw is :" << setw(4) << b << endl;
    cout << "the value of c with setw is :" << setw(4) << c << endl;
*/

//operator precedence
 
/*int a= 4, b=5;
int c=(a*5)*b+4;
cout<<c<<endl;*/

/* *************Associativity**************
Associativity starts from left to right in operator precedence
*/

 // 1.Control Statements --> if,else statements

 /*int age;
 cout<<"Enter your age "<<endl;
 cin>>age;

 if(age<18 & age>0){
cout<<"You are still a child and cannot come to the pool party"<<endl;
 }
else if( age==18){
cout<<" you are a teen and can come to the pool party"<<endl;
}
else if (age>18)
cout<<"you can come whenever you want and does not require any permission"<<endl;
 
*/
//2. Selection control structure--> Switch case statement 
/*int age;
cout<<"tell me your age"<<endl;
switch (age )
{
case 18:  
    cout<<"you are allowed to go trip and does not  need permission as you are an adult"
    <<endl;
    break;
case 8:
cout<<"you are not allowed to go to trip as you are still a kid"<<endl;
break;
case 11:
cout<<"you are allowed and can enjoy without hesitaton of approval "<<endl;
break;
default: 
cout<<"no special cases"<<endl;

break;
}
cout<<"done with all the cases"<<endl;
*/

/* Loops in c++
 there are 3 types of loops in c++
 1. for loop
 2.while loop
 3. do-while loop

    ************for loop***********
  


 */
return 0;
}