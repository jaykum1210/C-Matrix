#include <stdio.h>

int main(){
    FILE *a = fopen("C:\\hello\\bye.txt","w");
    if (a==NULL)
    {
        printf("Not found\n");
        return 0;
    }
    
}