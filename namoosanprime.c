#include <stdio.h>
int Prime(int a)
{int r,j=2;
if(a==1 || a==0) return 0;
else{
     while(j<=a/2)
       {
           if(!(r=a%j))
           return 0;
           else
            j++;
       }
       if(j>a/2)
        return 1;

}
}
int nthPrime(int n)
{
    int cnt=0;
    int i ;
    if(n==1) return 2;
    for(i=3;i<200000;i+=2)
    {
        if(Prime(i))
        {
            cnt++;
            if(cnt==(n-1))
             return i;
        }
    }
    return 0;
}
int main()
{
    int cnt;
    scanf("%d",&cnt);
    while(cnt>0)
    {
        int n;
        scanf("%d",&n);
        int x=nthPrime(nthPrime(n));
        printf("%d\n",x);
        cnt--;
    }
}
