#include <stdio.h>
#include <math.h>

int is_prime_number(int);
int is_square_number(int);
int is_cube_number(int);
int factorial(int);
int is_palindrom_number(int);
int is_neon_number(int);
int fibonacci(int);
int is_armstrong_number(int);
int is_disarium_number(int);
int is_harshad_number(int);
int main(){

    //declare variables
    int num;
    int choice;

    
        printf("Enter a number\n");
        scanf("%d",&num);

        printf("This is a menu driven Program\n");
        printf(" 1.Find if the number is Prime Number \n 2.Find if the number is square Number \n 3.Find if the number is cube Number \n");
        printf(" 4.Find the factorial of that Number \n 5.Find if the number is Palindrom Number \n 6.Find if the number is Neon Number \n");
        printf(" 7.Print fibonacci series till that number \n 8.Find if the number is Armstrong number\n 9.Find if the number is Disarium number\n");
        printf(" 10.Find if the number is Harshad Number\n");
        printf("Please Enter your choice : ");
        scanf("%d",&choice);
        printf("\n");

        switch (choice)
        {
        case 1: is_prime_number(num);
            break;
        case 2: is_square_number(num);
            break;
        case 3: is_cube_number(num);
            break;
        case 4: factorial(num);
            break;
        case 5: is_palindrom_number(num);
            break;
        case 6: is_neon_number(num);
            break;
        case 7: fibonacci(num);
            break;
        case 8: is_armstrong_number(num);
            break;
        case 9: is_disarium_number(num);
            break;
        case 10: is_harshad_number(num);
            break;
        default: printf("Invalid choice entry\n");
            break;
        }
          
   return 0; 
}
//Function Definitions

int is_prime_number(int num){

    for( int i = 2 ; i <= num/2 ; i++ ){
                if(num%i == 0){
                    printf("%d is not a prime number\n", num);
                    return 0;
                }
            }
            printf("%d is a prime number\n", num);
            return 0;
}

int is_square_number(int num){
            int rootInt;
            float rootFloat;

            rootFloat = sqrt(num);
            rootInt =(int)rootFloat;

            if(rootFloat == rootInt){
                printf("%d is a square number",num);
            }
            else{
                printf("%d is not a square number",num);
            }
            return 0;
}
int is_cube_number(int num){
            double cubeRootDouble,doubleNum;
            int cubeRootInt;
            doubleNum = num;
            cubeRootDouble = cbrt(doubleNum);
            cubeRootInt = (int)cubeRootDouble;

            if(cubeRootDouble == cubeRootInt){
               printf("%d is a cube number", num); 
            }
            else{
                printf("%d is not a cube number", num); 
            }
            return 0;
}
int factorial(int num){
            long long int prod=1;
            if(num == 0)
            {
                printf("factorial of %d is : %lld \n",num,prod);
            }
            else
            {
                for(int i=num; i>0;i--)
                {
                    prod = prod*i;
                }
                printf("Factorial of %d is : %lld \n",num,prod);
            }
            return 0;
}
int is_palindrom_number(int num){
            long rem,rev=0,n;
            n=num;
            while(n!=0)
            {
                rem = n%10;
                n = n/10;
                rev = rev*10 + rem;
            }

            if (rev == num)
            {
                printf("%d is a palindrom number",num); 
            }
            else 
            {
                printf("%d is not a palindrom number",num); 
            }
            return 0;
}
int is_neon_number(int num){
        long int square,rem,sum=0;
            square=num*num;
           while (square != 0)
           {
               rem = square%10;
               square = square/10;
               sum= sum + rem;
           }

           if (num == sum){
               printf("%d is a neon number",num);
           }
           else{
               printf("%d is not a neon number",num);
           }
    return 0;
}
int fibonacci(int num){
        int first=0,second=1,temp;

            while(first<=num){

                printf("%d ",first);
                temp = first;
                first = second;
                second= temp + second;
            }
            return 0;
}
int is_armstrong_number(int num){
    int n,rem,power=0,temp;
    double sum=0;
            //to find power
            temp=num;
            while(temp){
                power++;
                temp = temp/10;
            }

            n=num;
            while(n!=0){
                rem = n%10;
                n = n/10;
                sum = sum+ pow(rem,(power/1.0));
            }

            if(num == sum){

                 printf("%d is a Armstrong number",num);
            }
            else{

                printf("%d is not a Armstrong number",num);
            }
            return 0;
}
int is_disarium_number(int num){
    int rem,n,rev=0;
          double sum=0,i=1;

          n=num;

          while(n != 0){
              rem = n%10;
              n = n/10;
              rev = rev*10 + rem;
          }  	

          while(rev != 0){
              rem = rev%10;
              rev = rev/10;
              sum = sum+ pow(rem,i);
              i++;
          }

          if(num == sum){

              printf("%d is a disarium number",num);
          }
          else{

              printf("%d is not a disarium number",num);
          }
          return 0;
}
int is_harshad_number(int num){
     int n,rem,sum=0;
            n=num;
            while(n != 0){

                rem = n%10;
                n = n/10;
                sum = sum + rem;
            }
            
            if(num%sum == 0){

                printf("%d is a Harshad number",num);
            }
            else{

                printf("%d is not a Harshad number",num);
            }
            return 0;
}
