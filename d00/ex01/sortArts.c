#include "header.h"

void    sortArts(struct s_art **arts)
{
    int i = 0;
    int index = 0;
    while (arts[i])
    {
        index = findSmallest(arts, i);
        swap(&arts[i], &arts[index]);
        ++i;
    }
    // index = findSmallest(arts, 0);
    // swap(&arts[0], &arts[index]);
    // while (arts[i])
    // {
    //     printf("%s => %d\n", arts[i]->name, arts[i]->price);
    //     ++i;
    // }
    // i = 0;
    // index = findSmallest(arts, 1);
    // swap(&arts[1], &arts[index]);
    // while (arts[i])
    // {
    //     printf("%s => %d\n", arts[i]->name, arts[i]->price);
    //     ++i;
    // }
    // i = 0;
    // index = findSmallest(arts, 2);
    // swap(&arts[2], &arts[index]);
    // while (arts[i])
    // {
    //     printf("%s => %d\n", arts[i]->name, arts[i]->price);
    //     ++i;
    // }
    i = 0;
    FILE *fp;
    fp = fopen("./test.txt","w");
    while (arts[i])
    {
        fprintf(fp, "%s => %d\n", arts[i]->name, arts[i]->price);
        ++i;
    }
}
/*
selection sort
*/
int    findSmallest(struct s_art **arts, int index)
{
    int smallest = index;
    char *tmp_str = arts[index]->name;
    for (int i = index; arts[i]; ++i)
    {
        // printf("tmp: %s\n", tmp->name);
        // printf("arts[%d]: %s\n", i, arts[i]->name);
        if (strcmp(tmp_str, arts[i]->name) > 0)
        {
            tmp_str = arts[i]->name;
            smallest = i;
            // printf("changed\n");
        }
    }
    return (smallest);
}
/*
bubble sort
*/
// void    bubble(struct s_art **arts)
// {
    
// }
void    swap(struct s_art **x, struct s_art **y)
{
    struct s_art *tmp = *x;
    *x = *y;
    *y = tmp;
}