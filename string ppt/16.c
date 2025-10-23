#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count=0,found;
    while (a[count] != '\0' && a[count] != '\n')
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        found = 0;
        for (int j = 0; j < count; j++)
        {
            if (a[i] == a[j] && i!=j)
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            printf("Element = %c",a[i]);
            break;
        }
    }
    return 0;
}