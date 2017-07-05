#include<stdio.h>
char cacl_biggest(char *arr,char size)
{
	char max = 0;
	char i = 0,j = 0;
	char x = 0;
	for(i = 0;i <= size+1;i++)
	{
		j = i+1;
		x = i;
		arr[size+2] = 0;
		for(;j <=size+1;j++)
		{
			while( x <= j )
			{
				arr[size+2] += arr[x];
				x++;
			}
			if(max < arr[size+2])
			{
				max = arr[size+2];
			}
		}
	}
	return max;	
}
int main()
{
	char a[13] = {0,-3,6,8,-20,21,8,-9,10,-1,3,6,5};
	char b[10] = {-2,11,-4,13,-5,2,-5,-3,12,-9};
	
	printf("The biggest list is %d\n",cacl_biggest(a,11));
	printf("The biggest list is %d\n",cacl_biggest(b,10));
	return 0;	
}
