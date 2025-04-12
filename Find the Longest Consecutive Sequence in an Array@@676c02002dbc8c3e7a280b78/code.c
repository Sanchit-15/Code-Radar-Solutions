#include <stdio.h>

void longes(int a[], int n) {

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (a[j] > a[j+1]) {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    
    int curre = 1;
    int maxlen = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1] + 1) {
            curre++;
        } else if (a[i] != a[i-1]) {
            if (curre > maxlen) {
                maxlen = curre;
            }
            curre = 1;
        }
    }
    
    
    if (curre > maxlen) {
        maxlen = curre;
    }
    
    printf("%d", maxlen);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    longes(a, n);
    return 0;
}
