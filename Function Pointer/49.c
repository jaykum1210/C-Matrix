#include <stdio.h>

int part1(int a) {
    return a;
}

int part2(int b) {
    return b;
}

int total(int x, int y) {
    return x + y;
}

int main() {
    int a, b;

    printf("Enter two numbers = ");
    scanf("%d %d", &a, &b);

    int (*fp1)(int) = part1;
    int (*fp2)(int) = part2;
    int (*fp3)(int, int) = total;

    int p1 = fp1(a);
    int p2 = fp2(b);

    int sum = fp3(p1, p2);

    printf("Final Sum = %d\n", sum);

    return 0;
}
