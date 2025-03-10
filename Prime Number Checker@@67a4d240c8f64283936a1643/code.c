#include <stdio.h>

int prime() {
    int a,b;
    scanf("%d",&a);
    while (a > 0) {
        scanf("%d", &b);
        if (b % 2 == 0) {
            printf("1\n");
        } else {
            printf("0\n");
        }
        a--;
    }
}
prime()