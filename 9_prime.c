#include <stdio.h>
int main()
{
   int n, i, count = 0;

    printf("Enter the Number.\n");
    scanf("%d",&n);//This will scan the number entered by user.

    for(i=2; i<=n/2; ++i)
    {
        //Check for non prime number
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    //output.
    if (count==0)
        printf("%d is a Prime number.",n);
    else
        printf("%d is not a Prime number.",n);

    return 0;    
} 
 BIN +48.3 KB 9_Prime.exe 