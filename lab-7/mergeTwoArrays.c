#include <stdio.h>

int main() {
    int arr1[50], arr2[50], res[100];
    int i, j, k, n1, n2;

    int arraySort(int arr[], int n) {
        int i, j, temp;
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    // Input
    printf("Enter the number of elements in the 1st array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for the 1st array: ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input
    printf("Enter the number of elements in the 2nd array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for the 2nd array: ", n2);
    for (j = 0; j < n2; j++) {
        scanf("%d", &arr2[j]);
    }

    arraySort(arr1, n1);
    arraySort(arr2, n2);

    i = 0;
    j = 0;
    k = 0;

    // Merging starts
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            res[k] = arr1[i];
            i++;
        } else {
            res[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Remaining
    while (i < n1) {
        res[k] = arr1[i];
        i++;
        k++;
    }

    // Remaining
    while (j < n2) {
        res[k] = arr2[j];
        j++;
        k++;
    }

    // Display
    printf("\nMerged array is: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    //edge case if remaining is less than the previous value will not work
    //do some kind of bubble sort or selection sort to mitigate the issue

    return 0;
}
