#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    int count=0;
    for (int i = 0; i < b; i++)
    {
        if (a[i]=='.' || a[i]=='?'|| a[i]=='!')
        {
            count++;
        }
    }
    printf("Number = %d\n",count);
    return 0;
}