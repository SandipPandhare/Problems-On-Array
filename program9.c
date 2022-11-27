#include<stdio.h>
#include<stdlib.h>
float Average(int Arr[],int iSize)
{
    int iSum=0,i=0;
    float fResult=0.0f;

    for(i=0;i<iSize;i++)
    {
        iSum+=Arr[i];
    }
    fResult=(float)iSum/(float)iSize;    //Explicit typecasting
    return fResult;
}
int main()
{
    int *ptr=NULL,iLenghth=0,i=0;
    float fRet=0.0f;

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

    fRet=Average(ptr,iLenghth);
    printf("Average is : %.2f\n",fRet);   //.2f --> width specify

    free(ptr);
    return 0;
}