#include <stdio.h>

int main(){
    char b[][100] = {
        "Hello",
        "Hii",
        "Bye",
        "CProgramming"
    };
    int len = 4;
    char *arr[len];
    for (int i = 0; i < len; i++)
    {
        arr[i] = b[i];
    }
    for (int i = 0; i < len; i++)
    {
        int j = 0;
        while (*(arr[i]+j)!='\0')
        {
            if (*(arr[i]+j)>='a' && *(arr[i]+j)<='z')
            {
                *(arr[i]+j)-=32;
            }
            else if (*(arr[i]+j)>='A' && *(arr[i]+j)<='Z')
            {
                *(arr[i]+j)+=32;
            }
            j++;
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("String %d = %s\n",i+1,arr[i]);
    }
    return 0;
}