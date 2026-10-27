#include <stdio.h>

int main() {
    int n, i;
    int kt = 1;

    scanf("%d", &n);

    if (n < 2) {
        kt = 0;
    } else {
        for (i = 2; i <= n / i; i++) {
            if (n % i == 0) {
                kt = 0;
                break;
            }
        }
    }

    if (kt == 1) {
        printf("La so nguyen to\n");
    } else {
        printf("Khong phai so nguyen to\n");
    }

    return 0;
}