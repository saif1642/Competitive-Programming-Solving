#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
static bool isPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
      if (number % i == 0 && i != number)
        return false;
    }
    return true;
}

int getnumber(string str){

    int sum=0,m;

  for(int i=0;i<str.length();i++){

    if (str[i] >= 'A' && str[i] <= 'Z'){
        int m=str[i]-64;
        sum+=m;
    }
    else{
        int n=str[i]-96;
        sum+=n;
    }
  }

return sum;

}
int main(){



 string str;

 while(cin>>str){

     int a;

    a=getnumber(str);

    if(isPrime(a))
        printf("It is a prime word.\n");
    else
        printf("It is not a prime word.\n");
    cout<<a;

 }



}
