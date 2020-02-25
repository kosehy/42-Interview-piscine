#ifndef HEADER_H
# define HEADER_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
/*--------------------------------
  !! required structure
  --------------------------------*/

struct s_art {
	char *name;
	int price;
};


/*--------------------------------
  :) function you must implement
  --------------------------------*/

void  sortArts(struct s_art **arts);

/*--------------------------------
  ?? test function used in main 
  --------------------------------*/

struct s_art **getArts(void);


/*--------------------------------
  &  your own other function
  --------------------------------*/

int  findSmallest(struct s_art **arts, int index);
void  swap(struct s_art **x, struct s_art **y);

#endif
