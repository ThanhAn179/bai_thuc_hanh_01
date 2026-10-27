#include <stdio.h>

int main() {
    int n, i, max;

    scanf("%d", &n);

    if (n <= 0) {
        printf("So phan tu phai lon hon 0\n");
        return 0;
    }

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("So lon nhat: %d\n", max);

    return 0;
}