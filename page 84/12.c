#include <stdio.h>

int sum(char b[], int i){
    if (b[i]=='\n' || b[i]=='\0')
    {
        return 0;
    }
    if (b[i]=='.')
    {
        return sum(b,i+1);
    }
    return (b[i] -'0')+ sum(b,i+1);
}

int main(){
    char b[100];
    printf("Enter float number = ");
    fgets(b,sizeof(b),stdin);
    int i = 0;
    int num = sum(b,i);
    printf("Sum of digits = %d\n",num);
    return 0;
}