#include <stdio.h>
#include <string.h>

int main(){
    char a[100],ch;
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
        int found  = 0;
        for (int j = i+1; j < len; j++)
        {
            if (a[i]==a[j])
            {
                found=1;
                break;
            }
        }
        if (found==0)
        {
            printf("Unique character = %c\n",a[i]);
            return 0;
        }
    }
    printf("No unique character\n");
    return 0;
}