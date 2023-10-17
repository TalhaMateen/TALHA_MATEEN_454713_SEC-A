#include <iostream>
using namespace std;
int main(){
//TASK NUMBER 2
//code checking for alphabets and consonants using cases.
char x;
int c;
//input alphabet from user.
cout<<"Input the alphabet."<<endl;
cin>>x;

//for both lowercase and uppercase vowels.
if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
{c=1;}

else{
//for both lowercase and uppercase consonants.
if(x>='a'&&x<='z'||x>='A'&&x<='Z')
{c=2;}
}

switch(c){

case 1:
//case for vowels.
cout<<x<<" is a vowel."<<endl;
cout<<endl;
break;

case 2:
//case for consonants 
cout<<x<<" is a consonant."<<endl;
cout<<endl;
break;

default:
//for invalid case.
{cout<<x<<" is invalid."<<endl;}
break;} 

return 0;
}
