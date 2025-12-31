#include <stdio.h>

struct person
{
    char a[100];
    int b;
};

int main(){
    struct person p;
    printf("Enter name = ");
    fgets(p.a,sizeof(p.a),stdin);
    printf("Enter int = ");
    scanf("%d",&p.b);
    printf("Name = %s",p.a);
    printf("Integer = %d\n",p.b);
    return 0;
}