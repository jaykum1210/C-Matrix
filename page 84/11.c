#include <stdio.h>

void rec(char a,int b){
    if (b==0)
    {
        return;
    }
    printf("%c ",a);
    rec(a,b-1);
}

int main(){
    char a;
    printf("Enter character = ");
    scanf("%c",&a);
    getchar();
    int b;
    printf("Enter number of calls = ");
    scanf("%d",&b);
    rec(a,b);
    return 0;
}