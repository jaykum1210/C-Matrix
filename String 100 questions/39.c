#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a),x=0;
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    for (int i = 0; i < len; i++)
    {
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
            int already = 0;
            for (int j = i+1; j < len; j++)
            {
                if (a[i]==a[j])
                {
                    already = 1;
                    break;
                }
            }
            if (already==1)
            {
                a[x++] = a[i];
            }
        }
    }
    a[x] = '\0';
    printf("String = %s",a);
    return 0;
}