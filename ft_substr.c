#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i = 0;
	char * sub;
	while (s[start + i] && i != len)
		i++;
	sub = malloc(i*sizeof(char)+1);
	if (!sub)
		return (NULL);
	else
	{
		i = 0;
		while (s[start + i] && i != len)
		{
			sub[i] = s[start + i];
			i++;
		}
		sub[i] = '\0';
		return (sub);
	}
}
#include <stdio.h>
int main ()
{
	char *str = "Hello 42";
	char *sub = ft_substr(str, 0, 5);
	printf("%s\n",sub);
	free(sub);
	return (1);
}
