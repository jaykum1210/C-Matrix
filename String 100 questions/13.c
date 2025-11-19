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
        b--;
    }
    int num = 1;
    for (int i = 0; i < b; i++)
    {
        if (a[i]==' ' && a[i+1]!=' ')
        {
            num++;
        }
    }
    printf("Number of Words = %d\n",num);
    return 0;
}