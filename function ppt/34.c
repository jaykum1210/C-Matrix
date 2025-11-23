#include <stdio.h>
#include <string.h>

int num(char a[],int len){
    int temp = 1;
    for (int i = 0; i < len; i++)
    {
        if (a[i]==' ' && a[i+1]!=' ')
        {
            temp++;
        }
    }
    return temp;
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    int b = num(a,len);
    printf("Number of words = %d\n",b);
    return 0;
}