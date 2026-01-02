#include <stdio.h>

struct number{
    int num;
};

int main(){
    struct number n[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d value = ",i+1);
        scanf("%d",&n[i].num);
    }
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        arr[i] = n[i].num;
    }
    printf("Copied\n");
    return 0;
}