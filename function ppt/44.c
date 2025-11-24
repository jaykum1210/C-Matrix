#include <stdio.h>
#include <string.h>

void ana(char a[],char b[], int len1, int len2){
    if (len1!=len2)
    {
        printf("Not an anagram\n");
        return;
    }
    for (int i = 0; i < len1; i++)
    {
        int num = 0, found = 0;
        for (int j = i-1; j >=0; j--)
        {
            if (a[i]==a[j])
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            for (int j = i; j < len1; j++)
            {
                if (a[i]==a[j])
                {
                    num++;
                }
            }
            for (int j = 0; j < len2; j++)
            {
                if (a[i]==b[j])
                {
                    num--;
                }
            }
            if (num!=0)
            {
                printf("Not an Anagram\n");
                return;
            }
        }
    }
    printf("Anagram\n");
    return;
}

int main(){
    char a[100],b[100];
    printf("Enter first String = ");
    fgets(a,sizeof(a),stdin);
    int len1 = strlen(a);
    if (a[len1-1]=='\n')
    {
        a[len1-1]='\0';
        len1--;
    }
    printf("Enter Second string = ");
    fgets(b,sizeof(b),stdin);
    int len2 = strlen(b);
    if (b[len2-1]=='\n')
    {
        b[len2-1]=='\0';
        len2--;
    }
    ana(a,b,len1,len2);
    return 0;
}