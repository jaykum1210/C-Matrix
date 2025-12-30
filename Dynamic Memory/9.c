#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char a[100];
    char *arr;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")] = '\0';
    int len = strlen(a);
    arr = (char *)malloc(len*sizeof(char));
    if (arr == NULL)
    {
        printf("Memory Allcation Failed\n");
        return 0;
    }
    strcpy(arr,a);
    printf("String = %s",arr);
    return 0;
}