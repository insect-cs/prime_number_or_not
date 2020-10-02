#include<stdio.h>
#include<math.h>

int main(){
    int n, prime=1;
    printf("enter a value to find prime or not\n");
    scanf("%d",&n);

    int i=2;
    do
    {
      if(n%i==0)
      {
          prime = 0;
          i++;
          break;
      }
    }while(i<n);
    if(prime==0)
    {
        printf("it is a prime number"); //if no. is divisible by 2 then it is prime
    }
    else
    {
        printf("it is not a prime number"); // if no. is not divisible by 2 it is not prime
    }

    return 0;
}
