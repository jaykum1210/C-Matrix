#include <stdio.h>

int len(char a[100]){
    int temp=0;
    while (a[temp]!='\0' && a[temp]!='\n')
    {
        temp++;
    }
    return temp;
}

int main(){
    char a[100];
    printf("Enter String = ");
    fgets(a,sizeof(a),stdin);
    int b = len(a);
    printf("Length of String = %d\n",b);
    return 0;
}