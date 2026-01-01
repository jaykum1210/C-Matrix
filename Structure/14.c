#include <stdio.h>

typedef struct {
    int a;
} age;

int main(){
    age b;
    printf("Enter age = ");
    scanf("%d",&b.a);
    printf("Age = %d\n",b.a);
    return 0;
}