#include <stdio.h>
#include <string.h>

int cou(char a[], int len){
    int num = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i]>='a' && a[i]<='z')
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
    int num = cou(a,len);
    printf("Number of lowercase characters = %d\n",num);
    return 0;
}