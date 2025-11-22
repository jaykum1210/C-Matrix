#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100],new[100],ori[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len1 = strlen(a);
    if (a[len1-1]=='\n')
    {
        a[len1-1]='\0';
        len1--;
    }
    printf("Enter word = ");
    fgets(b,sizeof(b),stdin);
    int len2 = strlen(b);
    if (b[len2-1]=='\n')
    {
        b[len2-1]='\0';
        len2--;
    }
    printf("Enter new word = ");
    fgets(new,sizeof(new),stdin);
    int len3 = strlen(new);
    if (new[len3-1]=='\n')
    {
        new[len3-1]='\0';
        len3--;
    }
    strcpy(ori,a);
    int start = 0;
    for (int i = 0; i < len1; i++)
    {
        if (a[i]==b[0])
        {
            int start = i;
            int found = 1;
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
                int x = 0;
                for (x = 0; x < len3; x++)
                {
                    a[i+x] = new[x];
                }
                int y = i+x;
                for (int j = i+len2; j < len1; j++)
                {
                    a[y++] = ori[j];
                }
                a[y] = '\0';
            }
        }
    }
    printf("String = %s",a);
    return 0;
}