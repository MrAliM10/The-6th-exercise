#include <stdio.h>

int main()
{
    char inp1[100],inp2[100];
    scanf("%s%s",inp1,inp2);
    int n=strlen(inp2);
    if(inp1[0]==inp2[n-1])
        puts("YES");
    else puts("NO");
}
