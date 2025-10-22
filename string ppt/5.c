#include <stdio.h>

int main(){
    char a[100],b[100];
    printf("Enter 1st string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter 2nd string = ");
    fgets(b,sizeof(b),stdin);
    int count1 = 0,count2=0;
    while (a[count1]!='\n'&& a[count1]!='\0')
    {
        count1++;
    }
    while (b[count2]!='\n' && b[count2]!='\n')
    {
        count2++;
    }
    int found = 0;
    if (count1!=count2)
    {
        printf("They are not same\n");
        return 0;
    }
    else{
        for (int i = 0; i < count1; i++)
        {
            if (a[i]!=b[i])
            {
                found=1;
                break;
            }
        }
    }
    if (found ==0)
    {
        printf("Same\n");
    }
    else{
        printf("Not same\n");
    }
    return 0;
}