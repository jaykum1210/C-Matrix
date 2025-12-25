#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a,b;
    printf("Enter two numebrs = ");
    scanf("%d%d",&a,&b);
    void (*fp)(int *,int *);
    fp = swap;
    fp(&a,&b);
    printf("Number = %d %d\n",a,b);
    return 0;
}