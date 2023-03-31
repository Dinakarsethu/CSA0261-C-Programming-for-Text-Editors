#include<stdio.h>
#include<math.h>
int sum_n(int n);
int check(int n1,int n2);
void main()
{
    int n1,n2,y,x,max,m;
    printf("Enter the Number: ");
    scanf("%d",&x);
    printf("Enter the Two positive Number:");
    scanf("%d %d",&n1,&n2);
    y = sum_n(x);
    printf("Sum of N Number:%d",x);
    m = check(n1,n2);
}
int sum_n(int x)
{
    if ((x==0)||(x==1)) 
    {
        return 0;
    }
    else{
        return((x-1)+(x-2));
    }
    return sum_n(x);
}
int check(int n1,int n2)
{
    int max;
    max = (n1 > n2) ? n1 : n2;
    while (1) {
            if ((max % n1 == 0) && (max % n2 == 0)) {
                printf("\nThe LCM of %d and %d is %d.", n1, n2, max);
                break;
            }
            ++max;
        }
        return 0;
}