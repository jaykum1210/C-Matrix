#include <stdio.h>
#include <string.h>

void rec(char a[], int len){
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
            int num = 0;
            for (int j = i; j < len; j++)
            {
                if (a[i]==a[j])
                {
                    num++;
                }
            }
            printf("Frequency of \'%c\' = %d\n",a[i],num);
        }
    }
}

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
    rec(a,len);
    return 0;
}