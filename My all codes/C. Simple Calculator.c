#include <stdio.h>

int main() {
    int i;
    long long ll;
    char ch;
    float f;
    double d;

    // Reading input values
    scanf("%d %lld %c %f %lf", &i, &ll, &ch, &f, &d);

    // Printing values in the same order
    printf("%d\n", i);
    printf("%lld\n", ll);
    printf("%c\n", ch);
    printf("%f\n", f);
    printf("%lf\n", d);

    return 0;
}
