#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")] = '\0';
    int len = strlen(a);
    char *str;
    str = (char *)malloc((len+1)*sizeof(char));
    if (str==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    strcpy(str,a);
    printf("String = %s\n",str);
    free(str);
    return 0;
}