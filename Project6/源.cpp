#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i_a = 1;
	short s_a = 2;
	long l_a = 3;
	long long ll_a = 4;
	unsigned u_a = 5;
	unsigned short us_a = 6;
	unsigned long ul_a = 7;
	unsigned long long ull_a = 8;

	printf(" i_a = %d, sizeof(i_a) = %u\n", i_a, sizeof(i_a));
	printf(" s_a = %d, sizeof(s_a) = %u\n", s_a, sizeof(s_a));
	printf(" l_a = %ld, sizeof(l_a) = %u\n", l_a, sizeof(l_a));
	printf(" ll_a = %lld, sizeof(ll_a) = %u\n", ll_a, sizeof(ll_a));
	printf(" u_a = %u, sizeof(u_a) = %u\n", u_a, sizeof(u_a));
	printf(" us_a = %u, sizeof(us_a) = %u\n", us_a, sizeof(us_a));
	printf(" ul_a = %lu, sizeof(ul_a) = %u\n", ul_a, sizeof(ul_a));
	printf(" ull_a = %llu, sizeof(ull_a) = %u\n", ull_a, sizeof(ull_a));


}

