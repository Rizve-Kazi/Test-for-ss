#include <stdio.h>
#include <limits.h>

void sort(int arr[], int size)
{
    // Selection Sort ব্যবহার করছি ছোট থেকে বড় সাজানোর জন্য
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Step 2: Sort the array
    sort(arr, m);

    // Step 3: Find minimum difference
    int min_diff = INT_MAX;

    int arr1[10];
    int j=0;

    for (int i = 0; i <= m - n; i++)
    {
        int diff = arr[i + n - 1] - arr[i];
        {
            arr1[j++]=diff;
        }
    }
    arr1[j]='\0';

    int min = arr1[0];
    for(int i=0;arr1[i]!='\0';i++)
    {
       if(min>arr1[i])
       {
           min=arr1[i];
       }
    }
    printf("%d\n",min);



}
