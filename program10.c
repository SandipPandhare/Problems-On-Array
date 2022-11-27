#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iSize)
{
    int count=0,i=0;
    for(i=0;i<iSize;i++)
    {
        if((Arr[i]%2)==0)
        {
            count++;
        }
    }
    return count;
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

    iRet=CountEven(ptr,iLenghth);
    printf("number of Even elements is : %d\n",iRet);  

    free(ptr);
    return 0;
}