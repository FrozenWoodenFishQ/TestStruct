#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x,i,*a=NULL;
    printf("���������鳤�ȣ�");
    scanf("%d",&x);
    a=(int*)malloc(x*sizeof (int));
    printf("�����룺");
    for(i=0;i<x;i++)
    {
        scanf("%d",a+i);
        a[i]*=2;
        a[i]%=3;
        a[i]+=4;
        if (i==0)
            printf("����һϵ������֮��Ľ����");
        printf("%d ",*(a+i));
    }
    return 0;
}
