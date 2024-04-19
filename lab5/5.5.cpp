#include <stdio.h>

int findMin(int a[], int n) {
    if (n == 1) {
        return a[0];
    } else {
        int minRest = findMin(a, n - 1);
        return (a[n - 1] < minRest) ? a[n - 1] : minRest;
    }
}

int main() {
    int arr[] = {10, 5, 8, 3, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int min = findMin(arr, size);
    
    printf("Giá trị nhỏ nhất trong mảng là: %d\n", min);

    return 0;
}