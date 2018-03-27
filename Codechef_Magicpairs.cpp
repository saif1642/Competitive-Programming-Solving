#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    long long int t, n, a,result;
    cin>>t;
    while(t--) {
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
        }

        result=((n*n)-n)/2;
        cout<<result<<endl;
    	}
    	return 0;
    }

