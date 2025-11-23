#include <stdio.h>

void rev(char a[100]){
    int count = 0;
    while (a[count]!='\n' && a[count]!='\0')
    {
        count++;
    }
    for (int i = 0; i < count/2; i++)
    {
        char temp = a[i];
        a[i] = a[count-i-1];
        a[count-i-1]= temp;
    }
    printf("reverse string = %s",a);
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    rev(a);
    return 0;
}