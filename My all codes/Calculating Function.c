#include<stdio.h>
int main() {
    int n;  scanf("%d",&n);
    int cnt[n + 1];
    for (int i = 1; i <= n; i++) cnt[i] = 0;
    int x;  scanf("%d",&x);
    int a[x + 1];
    for (int i = 1; i <= x; i++) {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }

    int y;  scanf("%d",&y);
    int b[y + 1];
    for (int i = 1; i <= y; i++) {
        scanf("%d", &b[i]);
        cnt[b[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (cnt[i] == 0) {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");

    return 0;
}
