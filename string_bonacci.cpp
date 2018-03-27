#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector <string> dp[80];
string fn( int n ) {
    if( n == 0 ) {
        dp[0]="a";
        return dp[0];
    }
    if( n == 1 ) {
        dp[1]="b";
        return dp[1];
    }


    if(dp[n]!=-1)
        return dp[n];
    else{
        dp[n]=f(n-2)+f(n-1);
        return dp[n];
    }

}

int main(){

    int t,n,i;
    cin>>t;

    for(int j=1;j<=t;j++){
        memset(dp,-1,sizeof(dp));
        cin>>n>>i;

        string res=f(n);

       cout<<res[i];
    }


}


