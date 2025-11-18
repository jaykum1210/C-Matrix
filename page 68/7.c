#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter name = ");
    fgets(a,sizeof(a),stdin);
    int floor,number;
    printf("Enter floor number = ");
    scanf("%d",&floor);
    printf("Enter room number = ");
    scanf("%d",&number);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1] = '\0';
        len--;
    }
    printf("Room %d on Floor %d is booked by %s",number,floor,a);
    return 0;
}