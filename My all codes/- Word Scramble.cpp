#include <stdio.h>

int main() {
    int year;
    int first = 1;

    while (scanf("%d", &year) != EOF) {
        if (!first) {
            printf("\n");
        }
        first = 0;

        int leap = 0, huluculu = 0, bulukulu = 0;

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            leap = 1;
            printf("This is leap year.\n");
        }

        if (year % 15 == 0) {
            huluculu = 1;
            printf("This is huluculu festival year.\n");
        }

        if (leap && year % 55 == 0) {
            bulukulu = 1;
            printf("This is bulukulu festival year.\n");
        }

        if (!leap && !huluculu && !bulukulu) {
            printf("This is an ordinary year.\n");
        }
    }

    return 0;
}
