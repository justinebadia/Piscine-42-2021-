#include<stdio.h>

//#ifndef FT_ABS_H
//#define FT_ABS_H

#define Value 12

int main()
{	
#if Value < 0
	Value = Value * (-1);
	printf("%d", Value);
	return (Value);
#else
	return (Value);
	printf("%d", Value);

#endif
	return(0);
}
