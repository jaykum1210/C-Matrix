#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    char b[100];
    printf("Enter substring = ");
    fgets(b,sizeof(b),stdin);
    int count1=0,count2=0;
    while (a[count1]!='\0' && a[count1]!='\n')
    {
        count1++;
    }
    while (b[count2]!='\0' && b[count2]!='\n')
    {
        count2++;
    }
    int found;
    for (int i = 0; i < count1; i++)
    {
        found = 0;
        for (int j = 0; j < count2; j++)
        {
            if (a[i]==b[j])
            {
                found=1;
                i++;
            }
            else{
                found = 0;
                break;
            }
        }
        if (found==1)
        {
            printf("Found\n");
            break;
        }
    }
    if (found == 0)
    {
        printf("Not found\n");
    }
    
    return 0;
}