#include <stdio.h>

int main(){
    int hr, min, sec;
    printf("Enter time in hr min sec = ");
    scanf("%d %d %d",&hr,&min,&sec);
    printf("Total Seconds = %d\n",hr*3600+min*60+sec);
    return 0;
}