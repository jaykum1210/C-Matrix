#include <stdio.h>

int main(){
    int n,count = 0,a=0,b=0,c=0,d=0,f=0,marks,i=0;
    printf("Enter number of students = ");
    scanf("%d",&n);
    while (i<n)
    {
        printf("Enter marks = ");
        scanf("%d",&marks);
        if (marks>=80)
        {
            a++;
        }
        else if (marks>=70)
        {
            b++;
        }
        else if (marks>=60)
        {
            c++;
        }
        else if (marks>=50)
        {
            d++;
        }
        else{
            f++;
        }
        i++;
    }
    printf("Number of Student having Grade A = %d\n",a);
    printf("Number of Student having Grade B = %d\n",b);
    printf("Number of Student having Grade C = %d\n",c);
    printf("Number of Student having Grade D = %d\n",d);
    printf("Number of Student having Grade F = %d\n",f);
    return 0;
}