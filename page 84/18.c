#include <stdio.h>
#include <math.h>

int sum(int a, int r, int n){
    int rn = (int)pow(r,n);
    return a*((rn-1)/(r-1));
}

int main(){
    int a,r,n;
    printf("Enter first term = ");
    scanf("%d",&a);
    printf("Enter ratio = ");
    scanf("%d",&r);
    printf("Enter number of terms = ");
    scanf("%d",&n);
    int num = sum(a,r,n);
    printf("Sum = %d\n",num);
    return 0;
}