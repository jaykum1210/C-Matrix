#include <stdio.h>
#include <string.h>

int main(){
    char a[100],ch;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int freq = 0,num=0;
    int b = strlen(a);
    if (a[b-1]=='\n')
    {
        a[b-1] = '\0';
        b--;
    }
    
    for (int i = 0; i < b; i++)
    {
        num=0;
        for (int j = i+1; j < b; j++)
        {
            if (a[i]==a[j])
            {
                num++;
            }
        }
        if (num>freq)
        {
            ch = a[i];
        }
    }
    printf("\'%c\' occurs %d times\n",ch,num);
    return 0;
}