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
    
    for (int i = 0; i < b/2; i++)
    {
        int temp = a[i];
        a[i] = a[b-i-1];
        a[b-i-1] = temp;
    }
    printf("String = %s",a);
    return 0;
}
