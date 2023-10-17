#include <iostream>
using namespace std;
int main(){
// TASK NUMBER 1
//checking for population of diff. provinces of Pakistan.
// input the province from the user.
int province;
cout<<"Input the province of Pakistan:"<<endl;

//declaring the provinces.
cout<<"Enter 1 for Punjab ."<<endl;
cout<<"Enter 2 for Balochistan ."<<endl;
cout<<"Enter 3 for Sindh ."<<endl;	
cout<<"Enter 4 for KPK."<<endl;	
cin>>province;

switch (province)
{
case 1:
// to check for population of Punjab.
cout<<"Population of Punjab is 127,474,000."<<endl;
break;

case 2:
// to check for population of Balochistan.
cout<<"Population of Balochistan is 20,094,659 ."<<endl;
break;

case 3:
// to check for population of Sindh.
cout<<"Population of Sindh is 54,858,515 ."<<endl;
break;

case 4:
// to check for population of KPK.
cout<<"Population of KPK is 39,372,462 ."<<endl;
break;

default:
//invalid case
cout<<"The typed number is not valid"<<endl;
break;
}
return 0;
}
