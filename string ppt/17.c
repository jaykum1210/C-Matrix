#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count=0;
    while (a[count] !='\0' && a[count]!='\n')
    {
        count++;
    }
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if (a[i]==a[j])
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
        {
            printf("First repeating character = \'%c\'\n",a[i]);
            break;
        }
    }
    return 0;
}