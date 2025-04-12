#include <stdio.h>

void prime(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 2) continue;
        int p = 1;
        for (int j = 2; j * j <= a[i]; j++) {
            if (a[i] % j == 0) {
                p = 0;
                break;
            }
        }
        if (p) count++;
    }
    printf("%d", count);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    prime(a, n);
    return 0;
}
