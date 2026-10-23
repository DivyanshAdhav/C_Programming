#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if (iValue < 0)
    {
        printf("Negative Number\n");
    }
    else if (iValue > 0)
    {
        printf("Positive Number\n");
    }
    else
    {
        printf("Zero\n");
    }  
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}