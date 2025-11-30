#include <stdio.h>

int rec(char a[]){
    int count = 0;
    while (a[count]!='\n' && a[count]!='\0')
    {
        count++;
    }
    return count;
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int num = rec(a);
    printf("Lenght = %d\n",num);
    return 0;
}