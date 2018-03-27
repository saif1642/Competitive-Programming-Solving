#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()
{
    int n;
    string s;

    while(scanf(%d,&n)==1)
    {
        for(int i=1;i<n;i++)
        {
            getline(cin,s);

            int l=(s[0]-65)*26*26+(s[1]-65)*26+(s[2]-65)*1;
            int d=(s[4]-48)*1000+(s[5]-48)*100+(s[6]-48)*10+(s[7]-48);

            int diff;
            if(l>d)
                diff=l-d;
            else
                diff=d-l;
            if(diff<=100)
                printf("nice\n");
            else
                printf("not nice\n");
        }
    }

    return 0;

}

