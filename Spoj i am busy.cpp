#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct act{
    int starting, ending;
}arr[100000];

bool compare(act a, act b){
        if( a.ending == b.ending )
        return a.starting < b.starting ;

    return a.ending < b.ending ;

}

int main(){
    int t, n, cnt, prevendtime;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(int i=0;i<n;i++)
            scanf("%d%d", &arr[i].starting, &arr[i].ending);
        sort(arr, arr + n, compare);
        cnt = 1;
        prevendtime = arr[0].ending;
        for(int i=1;i<n;i++){
            if(arr[i].starting>=prevendtime){
                cnt++;
                prevendtime = arr[i].ending;
            }

    }

    printf("%d\n", cnt);
}

}
