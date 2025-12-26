#include <stdio.h>
#include <string.h>

int count(char a[],int len){
    int num = 1;
    for (int i = 0; i < len; i++)
    {
        if (a[i]==' ' && a[i+1]!=' ')
        {
            num++;
        }
    }
    return num;
}

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
    int (*fp)(char *,int);
    fp = count;
    int num = fp(a,len);
    printf("Number of words = %d\n",num);
    return 0;
}