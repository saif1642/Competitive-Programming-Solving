#include<stdio.h>
#include<stack>
#include<string>
using namespace std;

int main(){

    stack<char>s;
    int t;
    scanf("%d",&t);

    getchar();

    while(t--){


    char x;

     while(1){
            x=getchar();

            if(x!=' '&&x!='\n'&&x!=EOF)
            s.push(x);

            else{
                while(!s.empty()){
                    printf("%c",s.top());
                    s.pop();
                }
                if(x=='\n'||x==EOF)
                  break;
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

