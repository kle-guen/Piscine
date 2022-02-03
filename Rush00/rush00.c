#include <unistd.h>

void ft_putchar(char c);


void ligne1(int x)
{
	int i;
	int j;
	
	i = 1;
	while(i <= 1)
	{	
		ft_putchar('o');
		i++;
	}
	while(i < x)
	{
		ft_putchar('-');
		i++;
	}
	ft_putchar('o');	
	ft_putchar('\n');
}	
void ligne2(int x)
{	
	int i;
	int j;
	
	i = 1;
	while(i <= 1)
	{
		ft_putchar('|');	
		i++;
	}
	while(i < x)
	{
		ft_putchar(' ');
		i++;	
	}
	ft_putchar('|');
	ft_putchar('\n');	
}


void rush00(int x, int y)
{
	int j;
	j = 1;
	while(j <= y) 
	{	
		if(j == 1 || j == y)
			ligne1(x);
		else  
			ligne2(x);
		j++;
	}
}
