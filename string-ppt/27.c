#include <stdio.h>
#include <string.h>

int main(){
    char a[50];
    int count = 0;
    printf("Enter character = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    for (int i = 0; i < b; i++)
    {
        if (a[i] == 32)
        {
            continue;
        }
        else{
            printf("%c",a[i]);
        }
    }
    return 0;
}