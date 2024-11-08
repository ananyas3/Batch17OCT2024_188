A3. Write a program to find the  n-th number made of prime digits
Input Format:
First Line Of Input Contains T Number Of Test Cases
Second Line Of Input Contains an input Number N.
Output Format:
Print the Nth number of sequence and it should be only prime.
Constraints:
1<=T<=100
1<=N<=10000
Examples:
Input :
1
10
Output:
 33
Program:
#include <stdio.h>
int is_prime_digit(int digit) {
    // Check if a digit is one of the prime digits (2, 3, 5, 7)
    return (digit == 2 || digit == 3 || digit == 5 || digit == 7);
}

int find_nth_prime_digit_number(int N)
 {
    int count = 0;
    int num = 1;

   // Keep checking numbers until we find the Nth number made of prime digits
    while (count < N)  // checking no until we find Nth no
{
        int temp = num;
        int is_prime_digit_number = 1;

       
        while (temp > 0) 
	{
            if (!is_prime_digit(temp % 10)) {
                is_prime_digit_number = 0;
                break;
            }
            temp /= 10;
        }

       
        if (is_prime_digit_number)
	 {
            count++;
        }

        num++;
    }

    return num - 1; // Return the nth primedigit no
}

int main() 
{
    int T, N;

    scanf("%d", &T);
    while (T--) 
    {
      
        scanf("%d", &N);
        printf("%d\n", find_nth_prime_digit_number(N));
    }

    return 0;
}

