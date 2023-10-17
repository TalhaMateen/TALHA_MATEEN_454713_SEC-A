#include <iostream>
using namespace std;
int main(){
//TASK NUMBER 5
//code for finding greatest number entered by user
float x,y,z;

//input three numbers from user
cout<<"Input the value of x."<<endl;
cout<<"Input the value of y."<<endl;
cout<<"Input the value of z."<<endl;
cin>>x>>y>>z;
cout<<endl;

//when x is greatest
if(x>y&&x>z)
{cout<<"x is greater ."<<endl;}

//when greatest number is y
else{
if(y>x&&y>z)	
{cout<<"y is greater ."<<endl;}

//for z to be a greatest number 
else{
cout<<"z is greater ."<<endl;}
}

return 0;
}
