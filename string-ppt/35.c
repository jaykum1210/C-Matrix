#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count = 1;
    int b = strlen(a);
    for (int i = 0; i < b; i++)
    {
        if (a[i] == ' ')
        {
            count++;
        }
    }
    printf("Number of words = %d\n",count);
    return 0;
}