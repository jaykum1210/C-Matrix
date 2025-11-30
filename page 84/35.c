#include <stdio.h>
#include <string.h>

int rec(char a[], char b, int len){
    for (int i = len; i >=0; i--)
    {
        if (a[i]==b)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    char a[100],b;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter character = ");
    scanf("%c",&b);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    int num = rec(a,b,len);
    if (num==-1)
    {
        printf("Not Found\n");
    }
    else{
        printf("Last occurance of %c = %d\n",b,num);
    }
    return 0;
}