#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
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
        if (a[i]>='A' && a[i]<='Z')
        {
            a[i] = a[i]+32;
        }
    }
    for (char i = 'a'; i < 'a'+ 26; i++)
    {
        int found = 0;
        for (int j = 0; j < len; j++)
        {
            if (i==a[j])
            {
                found = 1;
            }
        }
        if (found==0)
        {
            printf("Not a Panagram\n");
            return 0;
        }
    }
    printf("Panagram\n");
    return 0;
}