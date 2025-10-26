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
    int count = 0,min = __INT_MAX__,x=0;
    char c[x];
    for (int i = 0; i <=b; i++)
    {
          
    }
    
}