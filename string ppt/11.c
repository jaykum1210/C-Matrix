#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter character = ");
    char b = fgetc(stdin);
    int count = 0,x=0;
    while (a[count]!='\n' && a[count]!='\0')
    {
        if (a[count]==b)
        {
            x++;
        }
        count++;
    }
    printf("Frequency of \'%c\' = %d\n",b,x);
    return 0;
}