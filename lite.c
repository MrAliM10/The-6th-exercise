#include <stdio.h>

int Myocr(char B[6],char color)
{
    int cnt=0;
    for(int i=0;B[i]!='\0';i++)
    {
        if(B[i]==color)
        cnt++;
        else continue;
    }
    return cnt;
}
int main()
{
   char inp[6];
   scanf("%s",inp);
   if(Myocr(inp,'R')>=3)
    puts("nakhor lite");
   else if(Myocr(inp,'R')>=2 && Myocr(inp,'Y')>=2)
    puts("nakhor lite");
   else if(Myocr(inp,'G')==0)
    puts("nakhor lite");
   else
    puts("rahat baash");
}
