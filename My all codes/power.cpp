#include <stdio.h>
#include <math.h>

int main() {
    int n;
    long long p;

    while (scanf("%d %lld", &n, &p)!=EOF) {
        double k = round(pow(p, 1.0 / n));
        printf("%.0lf\n", k);
    }

    return 0;
}

