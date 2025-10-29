#include <stdlib.h>
#include <stdio.h>

int count_wrd(char *s, char c)
{
	int in_wrd;
	int count;

	in_wrd = 0;
	count = 0;

	while (*s)
	{
		if (*s != c && !in_wrd)
		{
			in_wrd = 1;
			count ++;
		}
		else if (*s == c)
			in_wrd = 0;
		s ++;
	}
	return (count);

}

char *get_next_wrd(char **s, char c)
{
	char *start;
	int len;
	char *word;

	while (**s == c)
		(*s)++;
	start = (*s);
	while (**s != c && **s)
		(*s) ++;
	len = (*s) - start;
	word = (char *)malloc(sizeof(char) * (len + 1));
	word[len] = '\0';
	while (len --)
		word[len] = start[len];
	return (word);
}

char **ft_split(char *s, char c)
{
	int wrds;
	char **array;
	int i;
	i = 0;
	wrds = count_wrd(s, c);
	array = (char **)malloc(sizeof(char *) * (wrds + 1));
	array[wrds] = NULL;
	while (i < wrds)
	{
		array[i] = get_next_wrd(&s, c);
		if (!array[i])
		{
			while(i)
				free(array[i--]);
			free(array);
		}
		i ++;
	}
	return (array);
}

int main(int argc, char **argv)
{
	int i = 0;
	char **splited;
	if (argc <= 1)
		return(0), printf("Nothing\n");
	splited = ft_split(argv[1], '!');
	while (splited[i] != NULL)
	{
		printf("-> %s ", splited[i]);
		i ++;
	}
	printf("\n");
	return (0);
}
