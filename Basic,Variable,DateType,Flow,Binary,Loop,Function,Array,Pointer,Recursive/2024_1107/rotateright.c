#include <stdio.h>

#define SIZE 4

int main() {
    int array[SIZE] = {1, 2, 3, 4};
    int N = 2; // Number of rotations
    int i, k, temp;

    for (k = 0; k < N; k++) {
        temp = array[SIZE - 1];
        for (i = SIZE - 1; i > 0; i--) {
            array[i] = array[i - 1];
        }
        array[0] = temp;
    }

    // Print the rotated array
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}