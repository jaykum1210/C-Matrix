#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter character = ");
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
    for (int i = 0; i < len1; i++)
    {
        if (a[i]==b[0])
        {
            int j = 0;
            int found = 1;
            for ( j = 0; j < len2; j++)
            {
                if (a[i+j]!=b[j])
                {
                    found = 0;
                    break;
                }
            }
            int x = i;
            if (found==1)
            {
                for (int j = i+len2+1; j < len1; j++)
                {
                    a[x++] = a[j];
                }
            }
            a[x]='\0';
        }   
    }
    printf("String = %s",a);
    return 0;
}