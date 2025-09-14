 #include <stdio.h>

 int main(){
    int a;
    float basic,hra,total= 0;
    printf("Enter number of employees = ");
    scanf("%d",&a);
    int b=0;
    while (b<a)
    {
        printf("Enter basic salary of = ");
        scanf("%f",&basic);
        float da = 0.39 * basic;
        if (basic>8000)
        {
            float hra1 = 0.15 * 8000;
            float hra2 = 0.30 * (basic - 8000);
            hra = hra1 + hra2;
        }
        else{
            hra = 0.15 * basic;
        }
        float cca = 800;
        float pf = 600;
        float net = basic + da + hra + cca - pf;
        printf("Net Pay = %0.2f\n",net);
        total +=net;
        b++;
    }
    printf("Total pay = %0.2f\n",total);
    return 0;
}