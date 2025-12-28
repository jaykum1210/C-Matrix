#include <stdio.h>
#include <string.h>

int main(){
    char *arr[] = {
        "Hello",
        "Hii",
        "CProgramming",
        "Byeeee"
    };
    int num = sizeof(arr)/sizeof(arr[0]);
    int max = 0;
    for (int i = 0; i < num; i++)
    {
        if (strlen(arr[max])<strlen(arr[i]))
        {
            max = i;
        }
    }
    printf("Max string = %s",arr[max]);
    return 0;
}