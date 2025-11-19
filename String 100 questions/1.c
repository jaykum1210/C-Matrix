#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count = 0;
    while (a[count]!='\0' && a[count]!='\n')
    {
        count++;
    }
    printf("Length of String = %d\n",count);
    return 0;
}