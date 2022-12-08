#include <stdio.h>
#define size 256

int Convert2Negative(int pixel)
{
    return 255-pixel;
}
int PrintImage(int pic[size][size],int n)
{
    int convert_pic[256][256];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            convert_pic[i][j]=Convert2Negative(pic[i][j]);
            printf("%d ",convert_pic[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int pic[256][256],dimension;
    scanf("%d",&dimension);
    for(int i=0;i<dimension;i++)
        for(int j=0;j<dimension;j++)
            scanf("%d",&pic[i][j]);

    PrintImage(pic,dimension);

}
