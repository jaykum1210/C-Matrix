#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int fre[256] = {0};
    int y=0;
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1] = '\0';
        len--;
    }
    for (int i = 0; i < len; i++)
    {
        int x = 0;
        int found = 0;
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
            for (int k = i; k < len; k++)
            {
                if (a[i]==a[k])
                {
                    x++;
                }
            }
            b[y] = a[i];
            fre[y] = x;
            y++;
        }
    }
    printf("frequency of Each character =\n");
    for (int i = 0; i < y; i++)
    {
        printf("\'%c\' = %d\n",b[i],fre[i]);
    }
    return 0;
}