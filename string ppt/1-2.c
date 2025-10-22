#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count = 0,i=0;
    while (a[i]!='\n')
    {
        count++;
        i++;
    }
    printf("Number = %d\n",count);
    return 0;
}