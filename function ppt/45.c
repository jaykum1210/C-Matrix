#include <stdio.h>
#include <string.h>

void max(char a[], int len){
    for (int i = 0; i < len-1; i++)
    {
        int num = 0,found = 0;
        for (int j = i-1; j >=0; j--)
        {
            if (a[i]==a[j])
            {
                found = 1;
                break;
            }
        }
        if (found==0)
        {
            for (int j = i; j < len; j++)
            {
                if (a[i]==a[j])
                {
                    num++;
                }
            }
            printf("Frequency of \'%c\' = %d\n",a[i],num);
        }
    }
    return;
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    max(a,len);
    return 0;
}