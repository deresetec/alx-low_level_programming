#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Prints the last digit of a randomly generated number
 *  and whether it is greater than 5, less than 6, or 0.
 *
 *  Return: Always 0.
 */
int main(void)
{
		int n;
                int num
		srand(time(0));
		n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
num = n% 10;
if (num > 5){
printf("%d is greater than 5\n", num);
}
else if ((num < 6) && (num != o)){
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
else
printf("%d and is 0\n", num);
}
return (0);
}								
