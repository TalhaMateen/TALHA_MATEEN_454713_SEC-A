#include <iostream>
using namespace std;
int main(){
//TASK NUMBER 4
//program for distinguishing child,adult and teenagers
//input age from user.
int age;
cout<<"Enter the age of person."<<endl;
cin>>age;


//case for children
if(age>=1&&age<=12)
{cout<<"The person is a child."<<endl;}

//for teenager.
else{

if(age>=13&&age<=17){

{cout<<"The person is a teenager."<<endl;}
}
//if the person is adult such as above 17 yrs.
else{
cout<<"The person is an adult."<<endl;}

}

return 0;
}
