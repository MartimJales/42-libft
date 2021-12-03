
//Falta testar e dar uma segunda vista de olhos em possiveis erros

// Reduzir o numeor de linhas e otimizar o código - Feito muito rápido

#include <stdlib.h>

//Allocates (with malloc(3)) and returns a copy of
//’s1’ with the characters specified in ’set’ removed
//from the beginning and the end of the string.
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		begin;
	int		end;
	char	*new;

	begin = 0;
	end = 0;
	while (*set)
	{
		if (*set == s1[0])
			begin = 1;
		if (*set == s1[size - 1])
			end = 1;
		set++;
	}
	new = malloc(sizeof(char) * (strlen(s1) - begin - end + 1));
	i = -1;
	while (s1[++i])
	{
		// Atenção ao acesso de memória inválido na linha abaixo
		new[begin] = s1[i];
		begin++;
	}
	if (end)
		new[size - 2] = '\0';
	else
		new[size - 1] 0 '\0';
	return (new);
}
