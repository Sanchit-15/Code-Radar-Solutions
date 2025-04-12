#include <stdio.h>

void zer(int a[], int n) {
    

    int temp[n], k = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            temp[k++] = a[i];
        }
    }

    while (k < n) {
        temp[k++] = 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    zer(a, n);
    return 0;
}
