#include <stdio.h>
#include <string.h>

int main(){
    char a[50],count = 0;
    printf("Enter character = ");
    fgets(a,sizeof(a),stdin);
    int b= strlen(a);
    for (int i = 0; i < b-1; i++)
    {
        if (a[i]>=48 && a[i]<=57)
        {
            count++;
        }
    }
    printf("Number of digit = %d\n",count);
    return 0;
}