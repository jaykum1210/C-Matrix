#include <stdio.h>
#include <string.h>

int count(char a[], int len){
    int num = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i]>='A' && a[i]<='Z')
        {
            num++;
        }
    }
    return num;
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    int num = count(a,len);
    printf("Number of Capital letters = %d\n",num);
    return 0;
}