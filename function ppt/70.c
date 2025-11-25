#include <stdio.h>

int main() {
    char arr[100];
    int i = 0;
    char ch;

    printf("Enter characters (press ENTER to stop): ");

    while ((ch = getchar()) != '\n') {
        arr[i] = ch;
        i++;
    }

    arr[i] = '\0';

    printf("You entered: %s\n", arr);

    return 0;
}
