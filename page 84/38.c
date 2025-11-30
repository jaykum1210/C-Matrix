#include <stdio.h>

int rec(char a[], char b[]){
    int num1 = 0;
    while (a[num1]!='\0' && a[num1]!='\n')
    {
        num1++;
    }
    int num2 = 0;
    while (b[num2]!='\n' && b[num2]!='\0')
    {
        num2++;
    }
    if (a[num1]=='\n')
    {
        a[num1]='\0';
    }
    if (b[num2]=='\n')
    {
        b[num2]='\0';
    }
    if (num1>num2)
    {
        return -1;
    }
    else if (num2>num1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char a[100],b[100];
    printf("Enter string 1 = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter string 2 = ");
    fgets(b,sizeof(b),stdin);
    int num = rec(a,b);
    if (num==-1)
    {
        printf("%s is bigger\n",a);
    }
    else if (num==1)
    {
        printf("%s is bigger\n",b);
    }
    else{
        printf("Both are equale\n");
    }
    return 0;
}