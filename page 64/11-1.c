#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter word = ");
    fgets(b,sizeof(b),stdin);
    int c = strlen(a);
    if (a[c-1]=='\n')
    {
        a[c-1]='\0';
    }
    int d = strlen(b);
    if (b[d-1]=='\n')
    {
        b[d-1]='\0';
    }
    int j,k,found=0;
    for (int i = 0; i < c; i++)
    {
        if (a[i]==b[0])
        {
            for (j = 0,k=i; b[j]!='\0' && a[k]!='\0'; j++,k++)
            {
                if (b[j]!=a[k])
                {
                    break;
                }
                
            }
            if (b[j]=='\0')
            {
                found=1;
                break;
            }
        }
    }
    if (found==0)
    {
        printf("%s is not found\n",b);
    }
    else{
        printf("%s is found\n",b);
    }
    return 0;
}