#include<stdio.h>
int main()
{
    int Arr[5];
    int iSum=0;
    printf("Enter the Numbers : ");

    for(int i=0;i<5;i++)
    {
     scanf("%d",&Arr[i]);
    }
    for(int i=0;i<5;i++)
    {
     iSum+=Arr[i];
    }
    printf("Addition is : %d",iSum);
    return 0;
}