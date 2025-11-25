#include <stdio.h>
#include <string.h>

void sub(char a[], char b[], int len1, int len2){
    for (int i = 0; i < len1; i++)
    {
        if (a[i]==b[0])
        {
            int found = 0;
            for (int j = 0; j < len2; j++)
            {
                if (a[i+j]!=b[j])
                {
                    found = 1;
                    break;
                }
            }
            if (found==0)
            {
                printf("Found\n");
                return;
            }
        }
    }
    printf("Not found\n");
    return;
}

int main(){
    char a[100],b[100];
    printf("Enter string 1 = ");
    fgets(a,sizeof(a),stdin);
    int len1 = strlen(a);
    if (a[len1-1]=='\n')
    {
        a[len1-1]='\0';
        len1--;
    }
    printf("Enter string 2 = ");
    fgets(b,sizeof(b),stdin);
    int len2 = strlen(b);
    if (b[len2-1]=='\n')
    {
        b[len2-1] = '\0';
        len2--;
    }
    sub(a,b,len1,len2);
    return 0;
}