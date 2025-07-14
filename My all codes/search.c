#include <stdio.h>

int main() {
    int rows, cols;

    // ধাপ ১: ম্যাট্রিক্সের আকার ইনপুট
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];  // পর্যাপ্ত সাইজ
    int sum = 0;

    // ধাপ ২: প্রথমে সব উপাদান ইনপুট নিই
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // ধাপ ৩: এখন আলাদা লুপে উপাদানগুলোর যোগফল করি
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    // ধাপ ৪: ফলাফল দেখানো
    printf("\nSum of all matrix elements = %d\n", sum);

    return 0;
}
