#include <stdio.h>
#include <string.h>

int word(char a[], int len){
    int num = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i]!=' ')
        {
            a[num++] = a[i];
        }
    }
    return num;
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    int num = word(a,len);
    printf("String = %s",a);
    return 0;
}