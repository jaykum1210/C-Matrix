#include <stdio.h>

int rev(int b[], int l,int r, int val){
    if (l>r)
    {
        return 0;
    }
        int mid = l + (r-l)/2;
        if (b[mid]==val)
        {
            return 1;
        }
        if (b[mid]>val)
        {
            return rev(b,l,mid-1,val);
        }
        else{
            return rev(b,mid+1,r,val);
        }
    return 0;
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int val;
    printf("Enter value = ");
    scanf("%d",&val);
    int l = 0, r=a-1;
    int num = rev(b,l,r,val);
    if (num)
    {
        printf("Found\n");
    }
    else{
        printf("Not found\n");
    }
    return 0;
}