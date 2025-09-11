#include <stdio.h>
#include <string.h>

int main(){
    char a[50],b;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter character = ");
    scanf(" %c",&b);
    int count=0;
    int c = strlen(a);
    for (int i = 0; i < c; i++)
    {
        if (a[i] == b)
        {
            count++;
        }
    }
    printf("Number of %c = %d\n",b,count);
    return 0;
}