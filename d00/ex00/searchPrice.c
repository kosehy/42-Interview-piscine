#include "header.h"

int		searchPrice(struct s_art **arts, char *name)
{
	int i = 0;
	// while (arts[i++])
	while (arts[i])
	// for(i = 0; arts[i]; ++i)
	{
		// printf("index: %d, name: %s\n", i, arts[i]->name);
		if (strcmp(arts[i]->name, name) == 0)
			return (i);
		++i;
	}	
	return (-1);
}