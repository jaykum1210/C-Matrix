#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    int x=0,found;
    for (int i = 0; i < b; i++)
    {
        found = 0;
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
            a[x++] = a[i];
        }
    }
    a[x] = '\0';
    printf("String = %s",a);
    return 0;
}