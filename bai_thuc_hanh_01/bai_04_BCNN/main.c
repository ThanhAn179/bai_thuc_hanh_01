#include <stdio.h>

int main(void) {
    int a, b;
    int x, y, r;
    int ucln, bcnn;

    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Nhap hai so nguyen duong\n");
        return 0;
    }

    x = a;
    y = b;

    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }

    ucln = x;
    bcnn = (a / ucln) * b;

    printf("BCNN: %lld\n", bcnn);

    return 0;
}