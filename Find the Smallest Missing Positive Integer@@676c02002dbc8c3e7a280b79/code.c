#include <stdio.h>

void small(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    int smallest = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] <= 0) continue;
        if (a[i] == smallest) {
            smallest++;
        } else if (a[i] > smallest) {
            break;
        }
    }

    printf("%d", smallest);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    small(a, n);
    return 0;
}
