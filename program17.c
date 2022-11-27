#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckNumber(int Arr[],int iSize)
{
    int i=0;
    bool result=false;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==11)
        {
          result=true;
          break;
        }
        else
        {
            result=false;
        }
    }
    return result;
}
int main()
{
    int *ptr=NULL,iLenghth=0,i=0;
    bool bRet=false;

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

    bRet=CheckNumber(ptr,iLenghth);
    if(bRet==true)
    {
        printf("Number is there");
    }
    else
    {
        printf("Number is not there");
    }

    free(ptr);
    return 0;
}