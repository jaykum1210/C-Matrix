#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }

    for (int i = 0; i < len; i++)
    {
        int x = 0;
        while (a[i]!=' ' && a[i]!='\0')
        {
            b[x++] = a[i];
            i++;
        }
        b[x] = '\0';
        i--;
        for (int j = i+1; j < len; j++)
        {
            if (b[0]==a[j])
            {
                int found = 1;
                for (int k = j; a[k]!=' ' && a[k]!='\0'; k++)
                {
                    if (b[k-j]!=a[k])
                    {
                        found=0;
                        break;
                    }
                }
                if (found==1)
                {
                    printf("%s ",b);
                    break;
                }
            }
        }
    }
    return 0;
}