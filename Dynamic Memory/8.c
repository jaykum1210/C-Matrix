#include <stdio.h>
#include <stdlib.h>

int main(){
    char *p;
    p = (char *)malloc(sizeof(char));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    *p = 'A';
    printf("Character = %c\n",*p);
    free(p);
    return 0;
}