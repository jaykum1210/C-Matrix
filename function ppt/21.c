#include <stdio.h>

float avg(int a[], int len){
    float temp = 0;
    for (int i = 0; i < len; i++)
    {
        temp+=a[i];
    }
    float avr = temp/len;
    return avr;
}

int main(){
    int len;
    printf("Enter size = ");
    scanf("%d",&len);
    int a[len];
    printf("Enter %d element = ",len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&a[i]);
    }
    float c = avg(a,len);
    printf("Average of all elements = %0.2f\n",c);
    return 0;
}