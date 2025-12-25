#include <stdio.h>
#include <string.h>

int pal(char a[], int len){
    char ori[100];
    strcpy(ori,a);
    for (int i = 0; i < len/2; i++)
    {
        char temp = a[i];
        a[i] = a[len-i-1];
        a[len-i-1] = temp;
    }
    return strcmp(ori,a);
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
    int (*fp)(char *, int);
    fp = pal;
    int num = fp(a,len);
    if (num==0)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not a Palindrome\n");
    }
    return 0;
}