#include <stdio.h>
#include <string.h>

int main(){
    char a[100],ch;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1] = '\0';
        len--;
    }
    
    int min = __INT_MAX__;
    int num = 0;
    for (int i = 0; i < len; i++)
    {
        int found = 0;
        num = 0;
        for (int j = i-1; j >=0; j--)
        {
            if (a[i]==a[j])
            {
                found=1;
                break;
            }
        }
        if (found==0)
        {
            for (int j = 0; j <=len; j++)
            {
                if (a[i]==a[j])
                {
                    num++;
                }
            }
            if (min>num)
            {
                min = num;
                ch = a[i];
            }
        }
    }
    printf("\'%c\' occurce %d times",ch,min);
    return 0;
}