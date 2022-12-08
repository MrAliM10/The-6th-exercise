#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int cnt;
    scanf("%d",&cnt);
    getchar();
    while(cnt!=0){
    char name[1000];
    scanf("%[^\n]%*c", name);
   int n=strlen(name);
    for(int j=0;j<n;j++)
        name[j]=tolower(name[j]);

     name[0] = toupper(name[0]);

  for (int i=0; i<n; i++)
   if (toascii(name[i])==32)
      name[i+1]=toupper(name[i+1]);

  printf("%s\n",name);
  cnt--;
}
}

