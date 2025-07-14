#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int count = 1;  // কমপক্ষে 1টা array থাকবে, যদি খালি না হয়
        for (int i = 1; i < n; i++) {
            // যদি আগের সংখ্যার সাথে পরের সংখ্যার গ্যাপ 1 বা তার কম হয়,
            // তাহলে একই array তে থাকবে, না হলে নতুন array শুরু হবে
            if (a[i] > a[i-1] + 1) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
