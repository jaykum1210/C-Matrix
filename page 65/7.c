#include <stdio.h>
#include <string.h>

int main(){
    char a[100],ch;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    if (a[b-1]=='\n')
    {
        a[b-1] = '\0';
        b--;
    }
    int max=0,num;
    for (int i = 0; i < b; i++)
    {
        num=0;
        for (int j = i+1; j < b; j++)
        {
            if (a[i]==a[j] && a[i]!=' ')
            {
                num++;
            }
        }
        if (num>max)
        {
            max = num;
            ch = a[i];
        }
    }
    printf("Maximum ocuurance is of letter \'%c\'",ch);
    return 0;
}