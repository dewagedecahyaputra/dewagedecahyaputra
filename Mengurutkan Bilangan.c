#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tukar(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main() {
    int n;
    scanf("%i",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%i",&arr[i]);
    }
    sort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%i\n", arr[i]);
    }

  
    return 0;
}