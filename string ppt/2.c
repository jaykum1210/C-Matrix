#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count = 0,x=0;
    while (a[x]!='\n')
    {
        count++;
        x++;
    }
    for (int i = 0; i < count/2; i++)
    {
        int temp = a[i];
        a[i] = a[count-i-1];
        a[count-i-1] = temp;
    }
    printf("String = %s",a);
    printf("String = %s",a);
    return 0;
}