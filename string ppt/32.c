#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    if (a[b-1]=='\n')
    {
        a[b-1] = '\0';
        b--;
    }
    int start = 0;
    for (int i = 0; i < b; i++)
    {
        if (a[i]==' ' || a[i]=='\0')
        {
            int end = i-1;
            while (start<end)
            {
                char temp = a[start];
                a[start] = a[end];
                a[end] = temp;
                start++;
                end--;
            }
            start = i+1;
        }
    }
    printf("String = %s",a);
    return 0;
}