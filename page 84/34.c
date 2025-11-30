#include <stdio.h>
#include <string.h>

int rec(char a[], char b, int len){
    for (int i = 0; i < len; i++)
    {
        if (a[i]==b)
        {
            return i;
        }
    }
    return 0;
}

int main(){
    char a[100],b;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter character = ");
    scanf("%c",&b);
    int len = strlen(a);
    int num = rec(a,b,len);
    if (num==0)
    {
        printf("%c not found\n",b);
    }
    else{
        printf("%c found at %d index\n",b,num);
    }
    return 0;
}