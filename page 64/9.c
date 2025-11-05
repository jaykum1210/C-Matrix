#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    int count = 1;
    if (a[b-1]=='\n')
    {
        a[b-1]='\0';
        b--;
    }
    for (int i = 0; i < b; i++)
    {
        if ((a[i]==' ' && a[i-1]!=' ') || a[i]=='\0')
        {
            count++;
        }
    }
    printf("Number of words = %d\n",count);
    return 0;
}