#include <stdio.h>
#include <string.h>

int main(){
    char a[50];
    int count = 0;
    printf("Enter character = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    for (int i = 0; i < b-1; i++)
    {
        if ((a[i]>=32 && a[i]<=47) || (a[i]>=58 && a[i]<=64) || (a[i]=91 && a[i]<=96) || (a[i]>=123 && a[i]<=126))
        {
            count++;
        }
    }
    printf("Number of special characters = %d\n",count);
    return 0;
}