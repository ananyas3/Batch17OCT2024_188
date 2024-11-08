Check whether a given number can be expressed as the sum of two prime number
i/p: Enter a positive integer: 34
Output: 34 = 3 + 31
    34 = 5 + 29
    34 = 11 + 23
    34 = 17 + 17
No of Ways = 4
No of Ways = -1
Ans:
 #include <stdio.h>
int isPrime(int num)  //  To check whether a number is prime 
{
	if (num <=1)
	{
		Return 0;
	}
	for(int i=2; i<= num; i++)
	{
		if (num % i == 0)
		{
		return 0;
	}
}
return 1;


int SumofPrimes(int n)
{
	int count =0;
	for (int i=2; i<=n/2; i++)
	{
	if(isPrime(i) && isPrime(n-i))
	{
		count++;
		printf(“%d=%d+%d\n”, n, i, n -i);
	}
	}
if (count>0)
{
	printf(“Noofways = %d”, count);
}
else
{
	Printf(“Noofways = -1”);	
}}
int main ()
{
	int n;
	printf(“enter a positive interger:”);
	scanf(“%d”, &n);
	SumofPrimes(n);
	return 0;
}	



