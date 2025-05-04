#include <stdio.h>

// انسخ هنا الدوال ft_strlen و ft_strrev

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

int main(void)
{
	char str[] = "1337 School";
	printf("Original: %s\n", str);
	printf("Reversed: %s\n", ft_strrev(str));
	return 0;
}

