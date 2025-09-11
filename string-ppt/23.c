#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    int count=0,b;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    b = strlen(a);
    for (int i = 0; i < b-1; i++)
    {
        if (a[i]=='a' || a[i]=='e' || a[i] == 'o' || a[i]=='i' || a[i]=='u'||a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            count++;
        }
    }
    printf("Number of vowels = %d\n",count);
    return 0;
}