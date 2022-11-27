#include<stdio.h>
//int Addition(int *brr)
int Addition(int brr[],int iSize)
{
    int iSum=0;
  for(int i=0;i<iSize;i++)
    {
     iSum+=brr[i];
    }
    return iSum;
}
int main()
{
    int *Arr=NULL,iRet=0,iLength=0;
    printf("Enter the number of element : ");
    scanf("%d",&iLength);

    Arr=(int*)malloc(iLength*sizeof(int));
    
    printf("Enter the Numbers : ");
    for(int i=0;i<iLength;i++)
    {
     scanf("%d",&Arr[i]);
    }
    iRet=Addition(Arr,iLength);  //Addition(100)
    printf("Addition is : %d",iRet);
    free(Arr);
    return 0;
}