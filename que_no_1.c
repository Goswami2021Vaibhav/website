// If a  number is input through the keyboard, write a 
// program to calculate the sum of its digits. (Hint: Use the modulus 
// operator ‘%’) 



#include<stdio.h>

int main(){
    
    int n,r,sum=0;
     
     printf("Enter the value of n=");
     scanf("%d", &n);

     while(n>0)
     {
        r=n%10;
        sum=sum+r;
        n=n/10;
 
     }
       printf("sum of digits of the number is = %d\n", sum);



    return 0;
}
