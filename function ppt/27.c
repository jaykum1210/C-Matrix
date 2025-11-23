#include <stdio.h>

int min(int a){
    return a*60;
}

int main(){
    int a;
    printf("Enter minutes = ");
    scanf("%d",&a);
    int b = min(a);
    printf("Number of seconds = %d\n",b);
    return 0;
}