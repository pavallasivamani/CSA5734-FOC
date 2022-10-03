#include <stdio.h>
 
int main()
{
  
    int i, no, oddsum = 0;
    
   
    printf("Enter the value of no upto which we want to find the sum \n");
    scanf("%d", &no);
  
    for (i = 1; i <= no; i++)
    {
        if (i % 2 != 0)
            oddsum = oddsum + i;
    }
   
   
    printf("Sum of all odd numbers = %d\n", oddsum);
 
    return 0;
}
