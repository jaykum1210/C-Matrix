#include <stdio.h>

int min(int a){
    return a*60;
}

int main(){
    int a;
    printf("Enter hour = ");
    scanf("%d",&a);
    int b = min(a);
    printf("Number of minutes = %d\n",b);
    return 0;
}