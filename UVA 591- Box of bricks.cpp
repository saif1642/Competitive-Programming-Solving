#include<cstdio>

int n;
int h[60];

int main() {
    for(int t = 1;; t++) {
        scanf("%d", &n);
        if(n == 0) break;
        int total = 0;
        for(int i = 0; i < n; i++) {
            scanf("%d", &h[i]);
            total += h[i];
        }
        int avg = total / n;
        int moves = 0;
        for(int i = 0; i < n; i++)
            if(h[i] > avg) moves =moves+(h[i] - avg);
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", t, moves);
    }
}
