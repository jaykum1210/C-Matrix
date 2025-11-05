#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter first string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter second dtring = ");
    fgets(b,sizeof(b),stdin);
    int c = strlen(a);
    if (a[c-1]=='\n')
    {
        a[c-1] = '\0';
        c--;
    }
    int d = strlen(b);
    if (b[d-1]=='\n')
    {
        b[d-1] = '\0';
        d--;
    }
    int max = c;
    if (c<d)
    {
        max = d;
    }
    for (int i = 0; i < max; i++)
    {
        if (a[i]>b[i])
        {
            printf("%s is greater",a);
            return 0;
        }
        else if (b[i]>a[i])
        {
            printf("%s is greater",b);
            return 0;
        }
    }
    printf("Both are equale\n");
    return 0;
}