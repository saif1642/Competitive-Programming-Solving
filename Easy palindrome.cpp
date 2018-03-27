#include<bits/stdc++.h>
using namespace std;
int main(){
  long long  t,num,a,n,c=1,i;
  scanf("%lld",&t);

  while(t--){

     scanf("%lld",&n);
       num=0;
        i=1;
        a=n;
        while(a>9)
        {
            num = num*10+a%10;
            a /= 10;
        }
        num = num*10+a;
        if(num==n)
          printf("Case %lld: Yes\n",c++);
        else
          printf("Case %lld: No\n",c++);



}

return 0;
}







