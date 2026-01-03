#include <stdio.h>

struct name
{
    char a[100];
};

int main(){
    struct name n;
    printf("Enter name = ");
    fgets(n.a,sizeof(n.a),stdin);
    printf("Name = %s",n.a);
    return 0;
}