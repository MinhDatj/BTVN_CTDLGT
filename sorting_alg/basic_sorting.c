#include <stdio.h>

void array_printing(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertion_sort(int a[], int n) {
    printf("Insertation Sort:\n   ");
    array_printing(a, n);

    for (int i = 1; i < n; i++) {
        int X = a[i], j = i - 1;

        while (j >= 0 && a[j] > X) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = X; 

        printf("%d: ", i);
        array_printing(a, n);
    }
}

void selection_sort(int a[], int n) {
    printf("Selection Sort:\n   ");
    array_printing(a, n);

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) 
                min_idx = j;
        }

        int tmp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = tmp;

        printf("%d: ", i + 1);
        array_printing(a, n);
    }
}

void bubble_sort(int a[], int n) {
    printf("Bubble Sort:\n   ");
    array_printing(a, n);

    // Swap largest number to back
    /*
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }

        printf("%d: ", i + 1);
        array_printing(a, n);
    }
    */

    // Swap smallest number to front
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (a[j] < a[j - 1]) {
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
        }

        printf("%d: ", i + 1);
        array_printing(a, n);
    }
}

int main() {
    int a[10] = {3, 10, 1, 23, 103, 34, 17, 53, 64, 71};
    int b[10] = {3, 10, 1, 23, 103, 34, 17, 53, 64, 71};
    int c[10] = {3, 10, 1, 23, 103, 34, 17, 53, 64, 71};
    insertion_sort(a, 10);
    printf("---------------------------\n");
    selection_sort(b, 10);
    printf("---------------------------\n");
    bubble_sort(c, 10);
    return 0;
}