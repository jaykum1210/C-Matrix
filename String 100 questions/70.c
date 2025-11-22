#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum+=a[i];
    }
    printf("Sum = %d\n",sum);
    return 0;
}