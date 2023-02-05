#include<stdio.h>
void main()
{
  printf("The following program is to find the the largest of three digits\n ");
  int num1,num2,num3;
  printf("Enter the first digit:-");
  scanf("%d",&num1);
   printf("Enter the second digit:-");
  scanf("%d",&num2);
   printf("Enter the third digit:-");
  scanf("%d",&num3);
  if(num1>=num2&&num1>=num3)
  {
  if(num1>num2&&num1>num3)
  {
    printf("\n%d is the largest among the three digits\n",num1);
  }
  else if(num1==num2)
  {
    printf("%d and %d both are equal and the largest ones among the three\n",num1,num2);
  }
  else if(num1==num3)
  {
    printf("%d and %d both are equal and are the largest numbers among th three digits\n",num1,num3);
  }
  }
  else if(num2>=num1&&num2>=num3)
  {
  if(num2>num1&&num2>num3)
  {
    printf("\n%d is the largest among the three digits\n",num2);
  }
  else if(num2==num1)
  {
    printf("%d and %d both are equal and the largest ones among the three\n",num2,num1);
  }
  else if(num2==num3)
  {
    printf("%d and %d both are equal and are the largest numbers among th three digits\n",num2,num3);
  }
  }
  else
  {
  if(num3>num1&&num3>num2)
  {
    printf("\n%d is the largest among the three digits\n",num3);
  }
  else if(num3==num2)
  {
    printf("%d and %d both are equal and the largest ones among the three\n",num3,num2);
  }
  else if(num1==num3)
  {
    printf("%d and %d both are equal and are the largest numbers among th three digits\n",num3,num1);
  }
  }

}
