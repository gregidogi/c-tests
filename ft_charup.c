#include <unistd.h>
#include <stdio.h>

char	*ft_charup(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >='a' && str[i] <='z')
		{
			str[i] = str[i] + 32;
			i++;
		}
	}
	return (str);
}

int main ()
{
	int i;

	i = 0;
	char c[] = "coucou";
	
		printf("le resultat : %s ",ft_charup(c));
		i++;
}
		
