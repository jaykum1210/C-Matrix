#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter String = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter word = ");
    fgets(b,sizeof(b),stdin);
    int c = strlen(a);
    if (a[c-1]=='\n')
    {
        a[c-1] = '\0';
        c--;
    }
    int d = strlen(b);
    if (b[d-1]=='\n')
    {
        b[d-1] = '\0';
        d--;
    }
    int j,k,num=0,found=0;
    for (int i = 0; i < c; i++)
    {
        num = 0;
        if (a[i]==b[0])
        {
            for (j = 0,k=i;b[j]!='\0' && a[k]!='\0'; j++,k++)
            {
                if (a[k]==b[j])
                {
                    num++;
                }
            }
            if (b[j]=='\0' && (a[k] == ' ' || a[k] == '\0') && (i == 0 || a[i - 1] == ' '))
            {
                found = 1;
            }
        }
        if (found==1)
        {
            int x;
            for (x = i; x <i+num; x++)
            {
                a[x] = '*';
            }
            found = 0;
        }
    }
    printf("%s",a);
    return 0;
}