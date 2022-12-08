#include <stdio.h>
#include <string.h>
// char revarr[8]="";
// void myStrrev(char array[8])
// {
//     for(int i=0;i<8;i++)
//     revarr[i]=array[7-i];
// }
int palindromeCondition(char arr[8])
{
   for(int i=0;i<8;i++)
   if(arr[i]==arr[7-i])
   continue ;
   else return 0;
   return 1;
}
int repetitionCondition(char arr[8])
{
    int cnt=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<8;j++)
    {if(arr[i]==arr[j])
        cnt++;
        if(cnt==4)
            return 1;
    }cnt=0;}return 0;
}
int b2bCondition(char arr[8])
{
    for(int i=0;i<6;i++)
        if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2])
        return 1;
    return 0;
}
int main()
{
    int cnt1; char num[8];
    scanf("%d",&cnt1);
    while(cnt1>0){
    scanf("%s",num);
    if(repetitionCondition(num))
        puts("Ronde!");
    else if(b2bCondition(num))
        puts("Ronde!");
    else if(palindromeCondition(num))
        puts("Ronde!");
    else puts("Rond Nist");
    cnt1--;
}
}
