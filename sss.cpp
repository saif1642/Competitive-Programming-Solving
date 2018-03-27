#include<iostream>
using namespace std;
int main ()
{
 string s,a=”Hajj”,b=”Umrah”;
int count=1;
while(s!=”*”)
{
cin>>s;
if(s==a)cout<<“Case “<<count<<“: “<<“Hajj-e-Akbar”<<endl;

else if(s==b)cout<<“Case “<<count<<“: “<<“Hajj-e-Asghar”<<endl;

count++;
}
}
