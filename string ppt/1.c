#include <stdio.h>

int main(){
    char a[] = "hello";
    int count=0,i=0;
    while (a[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Number = %d\n",count);
    return 0;
}