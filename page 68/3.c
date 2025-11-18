#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter character = ");
    b = getchar();
    int c = strlen(a),count=0;
    if (a[c-1]=='\n')
    {
        a[c-1] = '\0';
    }
    for (int i = 0; i < c; i++)
    {
        if (a[i]==b)
        {
            count++;
        }
    }
    printf("Frequency of \'%c\' = %d\n",b,count);
    return 0;
}