#include <stdio.h>
#include <string.h>

int main(){
    char a[100],ch;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int max = 0, num=0;
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    for (int i = 0; i < len; i++)
    {
        num = 0;
        int found = 0;
        for(int j = i-1; j >=0; j--){
            if (a[i]==a[j])
            {
                found = 1;
                break;
            }
        }
        if (found==0)
        {
            for (int j = i; j < len; j++)
            {
                if (a[i]==a[j])
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
    }
    printf("\'%c\' occures %d times",ch,max);
    return 0;
}