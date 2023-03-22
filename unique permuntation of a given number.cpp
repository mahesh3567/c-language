//write a program to print unique permutation of a given numbers
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {1, 2, 3,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); // sort the array in ascending order

    do {
        // process the current permutation
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } while (next_permutation(arr, arr + n)); // generate the next permutation

    return 0;
}

