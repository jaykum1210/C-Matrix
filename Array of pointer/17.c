#include <stdio.h>

int main(){
    char *arr[] = {
        "Hello",
        "Hii",
        "Bye",
    };
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        printf("%c ",*arr[i]);
    }
    return 0;
}