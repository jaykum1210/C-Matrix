#include <stdio.h>

/* Function for first partial value */
int part1(int a) {
    return a;
}

/* Function for second partial value */
int part2(int b) {
    return b;
}

/* Function for final sum */
int total(int x, int y) {
    return x + y;
}

int main() {
    int a, b;

    printf("Enter two numbers = ");
    scanf("%d %d", &a, &b);

    int (*fp1)(int) = part1;        // function pointer 1
    int (*fp2)(int) = part2;        // function pointer 2
    int (*fp3)(int, int) = total;   // function pointer 3

    int p1 = fp1(a);    // partial sum 1
    int p2 = fp2(b);    // partial sum 2

    int sum = fp3(p1, p2);   // final sum

    printf("Final Sum = %d\n", sum);

    return 0;
}
