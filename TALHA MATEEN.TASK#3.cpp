#include <iostream>
using namespace std;
int main(){
//TASK NUMBER 3
//checking for a no. is positive, negative or zero.
float number;
int c;
//input number from user.
cout<<"Input the number ."<<endl;
cin>>number;

//for positive number.
if(number>0)
{c=1;}

//condition for negative number.
else{
if(number<0)
{c=2;}	
}

switch(c){	
case 1:
cout<<number<<" is positive.";
break;

case 2:
cout<<number<<" is negative ."<<endl;	
break;

//condition for zero
default:
cout<<number<<" is zero ."<<endl;
break;	
}
return 0;
}
