#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iSize)
{
    int iCnt=0,i=0,iMax=Arr[0];
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]>iMax)
        {
            iMax=Arr[i];
        }
    }
    return iMax;
}
int main()
{
    int *ptr=NULL,iLenghth=0,i=0;
    int iRet=0;

    printf("Enter the size of array : ");
    scanf("%d",&iLenghth);

    ptr=(int *)malloc(sizeof(int)*iLenghth);

    if(ptr==NULL)
    {
        printf("unable to allocate memory");
    }

    printf("Enter the Elements : \n");
    for(i=0;i<iLenghth;i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet=Maximum(ptr,iLenghth);
    printf("Largest Number is : %d\n",iRet);  

    free(ptr);
    return 0;
}