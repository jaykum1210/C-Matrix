#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter name = ");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")] = '\0';
    int len = strlen(a);
    char *p;
    p = (char *)malloc((len+1)*sizeof(char));
    strcpy(p,a);
    printf("Name = %s\n",p);
    free(p);
    return 0;
}