#include <stdio.h>

void rec(char a,int b){
    if (b==0)
    {
        return;
    }
    printf("%c",a);
    return rec(a,b-1);
}

int main(){
    char a,b[10];
    printf("Enter String = ");
    scanf("%c",&a);
    getchar();
    printf("Enter integer = ");
    fgets(b,sizeof(b),stdin);
    if (b[0]=='\n')
    {
        rec(a,2);
    }
    else{
        int c = b[0]-'0';
        rec(a,c);
    }
    return 0;
}