#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len1 = strlen(a);
    printf("Enter word = ");
    fgets(b,sizeof(b),stdin);
    int len2 = strlen(b);
    if (a[len1-1]=='\n')
    {
        a[len1-1]='\0';
        len1--;
    }
    if (b[len2-1]=='\n')
    {
        b[len2-1]='\0';
        len2--;
    }
    int num = 0;
    for (int i = 0; i < len1; i++)
    {
        int found = 1;
        if (a[i]==b[0])
        {
            for (int j = 0; j < len2; j++)
            {
                if (a[i+j]!=b[j])
                {
                    found = 0;
                    break;
                }
            }
            if (found==1)
            {
                num++;
            }
        }
    }
    printf("Number of substring = %d\n",num);
    return 0;
}