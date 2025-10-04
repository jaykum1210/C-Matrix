#include <stdio.h>

int main(){
    int a;
    printf("Enter numebr = ");
    scanf("%d",&a);
    int t=0,b[32];
    int ori = a;
    while (a!=0)
    {
        b[t] = a%2;
        t++;
        a/=2;
    }
    for (int i = 0; i < t/2+1; i++)
    {
        int temp = b[i];
        b[i] = b[t-i-1];
        b[t-i-1] = temp;
    }
    
    printf("Binary Equivalent of %d = ",ori);
    for (int i = 0; i < t; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}