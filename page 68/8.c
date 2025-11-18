#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1] = '\0';
        len--;
    }
    int max=0,start = 0,count,x=0;
    char word[100];
    for (int i = 0; i <=len; i++)
    {
        count=0;
        if (a[i]==' ' || a[i] == '\0')
        {
            for (int j = start; j<i; j++)
            {
                if (a[j]=='a'||a[j]=='e' || a[j]=='i'|| a[j]=='o'|| a[j]=='u'|| a[j]=='A'|| a[j]=='E'|| a[j]=='I'|| a[j]=='O'|| a[j]=='U')
                {
                    count++;
                }
            }
            if (count>max)
            {
                max = count;
                x=0;
                for (int j = start; j < i; j++)
                {
                    word[x++] = a[j];
                }
                word[x] = '\0';
            }
            start = i+1;
        }
    }
    printf("Word = %s",word);
    return 0;
}