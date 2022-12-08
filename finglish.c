#include <stdio.h>

int main()
{
      int cnt=1;
      char arr[6];
      scanf("%s",&arr);
      int n=strlen(arr);
      for(int i=0;i<n;i++)
      {if(arr[i]=='a'||arr[i]=='o'||arr[i]=='u'||arr[i]=='e'||arr[i]=='i')
        cnt*=2;}

     printf("%d",cnt);
}
