#include <stdio.h>
#include <string.h>

int rec(char a[], char b[], int len1, int len2){
    int num = 1;
    for (int i = 0; i < len1; i++)
    {
        if (a[i]==b[0])
        {
            int found = 1;
            for (int j = 0; j < len2; j++)
            {
                if (a[i+j]!=b[j])
                {
                    found = 0;
                    break;
                }
            }
            if (found==1)
            {
                for (int j = i; j >=0; j--)
                {
                    if (a[j]==' ')
                    {
                        num++;
                    }
                }
                return num;
            }
        }
    }
    return -1;
}

int main(){
    char a[100],b[100];
    printf("Enter 1st string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter 2nd String = ");
    fgets(b,sizeof(b),stdin);
    int len1 = strlen(a);
    if (a[len1-1]=='\n')
    {
        a[len1-1]='\0';
        len1--;
    }
    int len2 = strlen(b);
    if (b[len2-1]=='\n')
    {
        b[len2-1]='\0';
        len2--;
    }
    int num = rec(a,b,len1,len2);
    if (num==-1)
    {
        printf("Not found\n");
    }
    else{
        printf("First occurance of the word %s = %d\n",b,num);
    }
    return 0;
}