#include <stdio.h>
#include <string.h>

int rec(char a[], char b[],int len1, int len2){
    if (len1!=len2)
    {
        return -1;
    }
    for (int i = 0; i < len1; i++)
    {
        if (a[i]!=b[i])
        {
            return -1;
        }
    }
    return 0;
}

int main(){
    char a[100],b[100];
    printf("Enter 1st string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter 2nd string = ");
    fgets(b,sizeof(b),stdin);
    int len1 = strlen(a);
    if (a[len1-1]=='\n')
    {
        a[len1-1]='\0';
        len1--;
    }
    int len2 = strlen(b);
    if (b[len2-1]=='\n')
    {
        b[len2-1]='\0';
        len2--;
    }
    int num = rec(a,b,len1,len2);
    if (num==0)
    {
        printf("Equale\n");
    }
    else{
        printf("Not Equale\n");
    }
    return 0;
}