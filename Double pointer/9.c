#include <stdio.h>

int main(){
    int **pp = NULL;
    if (pp == NULL)
    {
        printf("NUll\n");
    }
    else{
        printf("Value = %d\n",**pp);
    }
    return 0;
}