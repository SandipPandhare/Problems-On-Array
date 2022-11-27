#include<stdio.h>
//int Addition(int *brr)
int Addition(int brr[])
{
    int iSum=0;
  for(int i=0;i<5;i++)
    {
     iSum+=brr[i];
    }
    return iSum;
}
int main()
{
    int Arr[5],iRet=0;
    printf("Enter the Numbers : ");

    for(int i=0;i<5;i++)
    {
     scanf("%d",&Arr[i]);
    }
    iRet=Addition(Arr);  //Addition(100)
    printf("Addition is : %d",iRet);
    return 0;
}