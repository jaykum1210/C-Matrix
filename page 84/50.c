#include <stdio.h>
#include <string.h>

void rec(char a[], char b[], char c[], int len){
    for (int i = 0; i < len; i++)
    {
        if (a[i]==b[0])
        {
            int x = i;
            int found = 0;
            for (int j = 0;b[j]!='\0'; j++)
            {
                if (a[x]!=b[j] || a[x]=='\0')
                {
                    found = 1;
                    break;
                }
                x++;
            }
            if (found==0)
            {
                int diff = strlen(c) - strlen(b);
                x = i;
                for (int j = 0;c[j]!='\0'; j++)
                {
                    a[x++] = c[j];
                }
                for (int j = i + strlen(b); j < len; j++)
                {
                    a[x++] = a[j];
                }
                a[x]='\0';
                len+=diff;
            }
        }
    }
}

int main(){
    char a[100];
    printf("Enter String = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    char b[] = "and";
    char c[] = "or";
    rec(a,b,c,len);
    printf("String = %s",a);
    return 0;
}