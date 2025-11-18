#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    int start = 0;
    if (a[len-1]=='\n')
    {
        a[len-1] = '\0';
        len--;
    }
    for (int i = 0; i <=len; i++)
    {
        if (a[i]==' ' || a[i]=='\0')
        {
            for (int x = start; x <i; x++)
            {
                for (int j = start; j < i-1; j++)
                {
                    if (a[j]>a[j+1])
                    {
                        char temp = a[j];
                        a[j] = a[j+1];
                        a[j+1] = temp;
                    }
                }
            }
            start = i+1;
        }
    }
    printf("String = %s",a);
    return 0;
}