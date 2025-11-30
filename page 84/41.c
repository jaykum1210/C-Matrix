#include <stdio.h>
#include <string.h>

void rec(char a[], int lb, int up, int len){
    for (int i = lb; i < up-1; i++)
    {
        for (int j = lb; j < up-i-1; j++)
        {
            if (a[j]>a[j+1])
            {   
                char temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main(){
    char a[100];
    printf("Ente string = ");
    fgets(a,sizeof(a),stdin);
    int lb,up;
    printf("Enter lower bound = ");
    scanf("%d",&lb);
    printf("Enter upper bound = ");
    scanf("%d",&up);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    rec(a,lb,up,len);
    printf("String = %s",a);
    return 0;
}