#include <stdio.h>

int main(){
    int a,b,c,sec;
    printf("Enter three numbers = ");
    scanf("%d%d%d",&a,&b,&c);
    int gr = a;
    if (b>gr)
    {
        gr = b;
    }
    if (c>gr)
    {
        gr = c;
    }

    if (gr == a)
    {
        if (b>c && b<gr)
        {
            sec = b;
        }
        else{
            sec = c;
        }
    }
    else if (gr == b)
    {
        if (a>c && a<gr)
        {
            sec = a;
        }
        else{
            sec = c;
        }
    }
    else
    {
        if (a>b && a<gr)    
        {
            sec = a;
        }
        else{
            sec = b;
        }
    }
    printf("Greatest = %d\n",gr);
    printf("Second greatest = %d\n",sec);
    return 0;
}