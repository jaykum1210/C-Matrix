#include <stdio.h>

int main(){
    int *ptr = NULL;
    if (ptr==NULL)
    {
        printf("Null\n");
    }
    else{
        printf("Address = %p\n",ptr);
    }
    return 0;
}