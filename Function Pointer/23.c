#include <stdio.h>

int count(char a[]){
    int num = 0;
    while (a[num]!='\n' && a[num]!='\0')
    {
        num++;
    }
    return num;
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int (*fp)(char *);
    fp = count;
    int num = fp(a);
    printf("Length = %d\n",num);
    return 0;
}