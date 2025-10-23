#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count = 0;
    while (a[count]!='\0' && a[count]!='\n')
    {
        count++;
    }
    char b[100],t=0;
    for (int i = 0; i < count; i++)
    {
        int found = 0;
        for (int j = i-1; j >=0; j--)
        {
            if (a[i]==a[j])
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            b[t++] = a[i];
        }
    }
    for (int i = 0; i < t; i++)
    {
        int num=0;
        for (int j = 0; j < count; j++)
        {
            if (b[i]==a[j])
            {
                num++;
            }
        }
        printf("\'%c\' = %d\n",b[i],num);
    }
    return 0;
}