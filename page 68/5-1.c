#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1] = '\0';
        len--;
    }
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("String = %s",a);
    return 0;
}