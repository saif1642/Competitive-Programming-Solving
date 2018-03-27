#include <iostream>

using namespace std;

bool isprime(int n) {
    for (int i=2;i<n;i++)
        if (n%i==0 && i!=n)
            return false;
    return true;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int z=1;

       while(!isprime(x+y+z))
        z++;
     cout<<z<<"\n";
    }
}
