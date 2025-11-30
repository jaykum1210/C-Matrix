#include <stdio.h>
#include <string.h>

void enco(char a[]){
    int i = 0;
    while (a[i]!='\n' && a[i]!='\0')
    {
        a[i] = a[i] + 1;
        i++;
    }
}

void de(char a[]){
    int i = 0;
    while (a[i]!='\n' && a[i]!='\0')
    {
        a[i] = a[i] - 1;
        i++;
    }
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
    if (len==0)
    {
        printf("None\n");
        return 0;
    }
    
    printf("%s\n",a);
    enco(a);
    printf("%s\n",a);
    de(a);
    printf("%s\n",a);
    return 0;
}