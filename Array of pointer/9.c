#include <stdio.h>

int main(){
    char *a[]= {
        "Hello",
        "hii",
        "bye",
        "hoooooo"
    };
    int count = sizeof(a)/sizeof(a[0]);
    printf("Number of string = %d\n",count);
    return 0;
}