#include <stdio.h>
#include <string.h>

int word(char a[], char b[],int len1, int len2,int i){
    if (a[i]=='\n' || a[i]=='\0')
    {
        return 0;
    }
    if (a[i]==b[0])
    {
        int found = 1;
        for (int j = i; j < len2; j++)
        {
            if (a[j]!=b[j-i])
            {
                found = 0;
            }
        }
        if (found==1)
        {
            return 1;
        }
    }
    return word(a,b,len1,len2,i+1);
}

int main(){
    char a[100],b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter substring = ");
    fgets(b,sizeof(b),stdin);
    int i = 0;
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
    
    int num = word(a,b,len1,len2,i);
    if (num==1)
    {
        printf("Found\n");
    }
    else{
        printf("Not Found\n");
    }
    return 0;
}