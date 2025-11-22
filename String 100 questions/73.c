#include <stdio.h>
#include <string.h>

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
    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (a[i]==a[j])
            {
                printf("Not a Heterogram\n");
                return 0;
            }
        }
    }
    printf("Heterogram\n");
    return 0;
}