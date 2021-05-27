/* This program will take 10 numbers simaltenously and then it will display, 
Prime, Odd/Even and will show the highest and lowest from those 10 numbers
Author: Arman Singh Sidhu
*/
#include<stdio.h>
#include<stdbool.h>
char isPrime(int num);
char isOdd(int num);
char minMax(int num[10]);
int main(){
    int arr[10],max,min;

    for(int i=0;i<10;i++){                                 // taking input from user
      printf("Please Enter the %d number \n",i+1);
      scanf("%d",&arr[i]);
    }
    
    min = arr[0];
    max = arr[0];
    for(int count=1;count<10;count++){                      // Finding max and min
      if(arr[count]<min){
        min = arr[count];
      }
      if(arr[count] > max){
        max = arr[count];
      }
    }
    

    printf("Sr.\tNumber\tPrime\tOdd/Even  Min/Max \n ");
    for(int i=0;i<10;i++){
      if((arr[i] != max) && (arr[i] != min)){
        printf("%d \t %d \t %c \t %c\t\t \n ",(i+1),arr[i],isPrime(arr[i]),isOdd(arr[i]));
      }
      if(arr[i] == max){
        printf("%d \t %d \t %c \t %c  \t  %c \n ",(i+1),arr[i],isPrime(arr[i]),isOdd(arr[i]),'H');
      }
      if(arr[i] == min){
        printf("%d \t %d \t %c \t %c  \t  %c \n ",(i+1),arr[i],isPrime(arr[i]),isOdd(arr[i]),'L');
      }
    }

    return 0;
}
char isPrime(int num){                            // This function checks whether the given number is prime or not
  int count = 2;
  if(num==0 || num==1){                         //  0 and 1 are not applicable because they are niether prime nor composite
    return 'N';
  }
  else if(num==2){                              // Exception in prime i.e. 2 is prime number
    return 'Y';
  }
  else{
    while(count<num){                          // This loop will iterate from 2 to one number less than original number entered to check its divisibility
      if(num%count==0){
        return 'N';
      }
      count++;
    }
  return 'Y';
  }
}
char isOdd(int num){
  if(num%2==0)
    return 'E';
  else
    return 'O';
}
