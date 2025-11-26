#include <stdio.h>
#include <string.h>

int pal(char a[], int len,int i){
    if (i==len/2)
    {
        return 1;
    }
    if (a[i]!=a[len-i-1])
    {
        return 0;
    }
    pal(a,len,i+1);
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
    int i = 0;
    int num = pal(a,len,i);
    if (num==1)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;
}