#include <stdio.h>

int sum(){
    static int num = 0;
    for (int i = 1; i < 100; i=i+3)
    {
        if (i%5==0)
        {
            num+=i;
        }
    }
    return num;
}

int main(){
    int num = sum();
    printf("Sum = %d\n",num);
    return 0;
}