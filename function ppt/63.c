#include <stdio.h>
#include <string.h>

void split(char a[], int len){
    printf("[");
    for (int i = 0; a[i] != '\0'; i++) {
        printf("'%c'", a[i]);
        if (a[i+1] != '\0') {
            printf(",");
        }
    }
    printf("]\n");
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    split(a,len);
    return 0;
}