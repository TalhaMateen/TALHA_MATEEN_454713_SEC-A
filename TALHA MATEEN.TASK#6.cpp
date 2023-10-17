#include <iostream>
using namespace std;
int main(){
//TASK NUMBER 6
//input alphabet from user.
char x;
cout<<"input alphabet."<<endl;
cin>>x;
cout<<endl;

//code for vowels using nested if-else. 
if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
{cout<<x<<" is a vowel."<<endl;}

//for alphabets which are consonants using nested if-else. 
else
{cout<<x<<" is a consonant."<<endl;}
return 0;
}
