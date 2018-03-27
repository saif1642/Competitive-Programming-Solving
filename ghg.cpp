#include<bits/stdc++.h>

using namespace std;
bool isEven(int n){
if(n%2==0)
    return true;
else
    return false;
}

int main(){

 int n;

 while(scanf("%d",&n)==1){

    if(n<10)
        cout<<n<<endl;


    if(isEven(n)){
        while(1){
            int p=10,q=28,i=1;
            if(n>=p||n<=q){
                cout<<i<<endl;
                break;
            }
            else{
                p=p+20;
                q=q+20;
                i++;
            }

        }


    }
 else{


     cout<<0<<endl;

 }



 }

}
