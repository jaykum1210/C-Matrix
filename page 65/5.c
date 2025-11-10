#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    if (a[b-1]=='\n')
    {
        a[b-1] = '\0';
        // b--;
    }
    
    for (int i = 1; i < b; i++)
    {
        for (int j = 0; j <i; j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
}