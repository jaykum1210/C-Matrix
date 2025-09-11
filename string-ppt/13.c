#include <stdio.h>

int main(){
    char a[100],count = 0;
    printf("Enter character = ");
    scanf("%s",&a);
    for (int i = 0;; i++)
    {
        if (a[i]!='\0')
        {
            count++;
        }
        else{
            break;
        }
    }
    printf("Number of Character = %d\n",count);
    return 0;
}