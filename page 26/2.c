#include <stdio.h>

int main(){
    int a,b;
    printf("Enter Cost Price = ");
    scanf("%d",&a);
    printf("Enter Selling Price = ");
    scanf("%d",&b);
    if(a<b){
        printf("Profit\n");
        printf("Profit in percentage = %0.2f%%\n",((float)a/b)*100);
    }
    else if (a>b)
    {
        printf("Loss\n");
        printf("Loss in percentage = %0.2f%%\n",((float)(a-b)/b)*100);
    }
    else{
        printf("No Profit or Loss");
    }
    return 0;
    
}