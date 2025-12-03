#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    float b;
    printf("Enter Float Value = ");
    scanf("%f",&b);
    char c;
    printf("Enter Character = ");
    scanf(" %c",&c);
    getchar();
    char d[100];
    printf("Enter string = ");
    fgets(d,sizeof(d),stdin);
    void *ptr;
    ptr = &a;
    printf("Integer = %d\n",*((int *)ptr));
    ptr = &b;
    printf("Float = %0.2f\n",*((float *)ptr));
    ptr = &c;
    printf("Character = %c\n",*((char *)ptr));
    ptr = &d;
    printf("String = %s\n",(char *)ptr);
    return 0;
}