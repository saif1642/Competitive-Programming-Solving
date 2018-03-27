

#include <cstdio>
#include <iostream>

using namespace std;

int LuckyN[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};

bool Lucky(int n)
{


    for(int i=0;i<12;i++)
    {
        if((n%LuckyN[i])==0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;

    while(cin>>n)
    {
        if(Lucky(n))
        {
            cout<<"YES"<<"\n";
            continue;
        }
        cout<<"NO"<<"\n";
    }
    return 0;
}

