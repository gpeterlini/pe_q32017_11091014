#include<stdio.h>
int fibMem [1000];
int fib(int n){
	if (n==0) return 0;
	if (n<=2) return 1;
	/*a l t e r e   a   l i n h a   a b a i x o*/
	return fib(n−1)+fib(n−2);
}
int   main()
{
	int n;
	fibMem[1] = 1 ;
	fibMem[2] = 1 ;
	scanf("%d ", &n ) ;
	printf("%d \n",  fib(n));
	return 0 ;
}
