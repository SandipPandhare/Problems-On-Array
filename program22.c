#include<stdio.h>
#include<stdlib.h>
int CheckLastOccurence(int Arr[],int iSize,int iNo)
{
    int i=0,result=0,index=-1;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==iNo)
        {
          index=i;
        }
    }
    return index;
}
int main()
{
    int *ptr=NULL,iLenghth=0,i=0,iValue=0;
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

    printf("Enter the Element that you want to search : ");
    scanf("%d",&iValue);

    iRet=CheckLastOccurence(ptr,iLenghth,iValue);
    if(iRet==-1)
    {
        printf("Number is not there");
    }
    else
    {
        printf("Number is there at %d position",iRet);
    }

    free(ptr);
    return 0;
}