#include <stdio.h>
#include <stdlib.h>

int main(){
    char *p;
    p = (char *)malloc(100*sizeof(char));
    if (p==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    printf("Enter string = ");
    fgets(p,100,stdin);
    int count = 0;
    while (p[count]!='\n' && p[count]!='\0')
    {
        count++;
    }
    printf("Length = %d\n",count);
    free(p);
    return 0;
}