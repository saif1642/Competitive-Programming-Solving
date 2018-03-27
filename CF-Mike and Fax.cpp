#include <stdio.h>
#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    int i, k,length;
    int flag = 0;



   cin>>s>>k;

     length = s.size();

     int  n=(length/k);

              for(int j=0;j<length;j=j+n){
                 for(i=0;i<n/2 ;i++){
            if(s[i] != s[(n/2)-i-1]){
            flag = 1;
            break;
	       }

         }
     }



   if (flag) {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }


    return 0;
}
