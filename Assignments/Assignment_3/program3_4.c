#include<stdio.h>

void DisplayConvert (char cValue)
{
  if(cValue >= 'A' && cValue <= 'Z')
  {
    printf("The converted character is: %c\n", cValue + 32);
  }
  else if(cValue >= 'a' && cValue <= 'z')
  {
    printf("The converted character is: %c\n", cValue - 32);
  }
}

int main()
{
  char cValue;
  printf("Enter a character: ");
  scanf(" %c", &cValue);

  DisplayConvert(cValue);

  return 0;
}