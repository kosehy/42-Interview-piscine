/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchPriceV2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:49:52 by sko               #+#    #+#             */
/*   Updated: 2020/02/25 14:49:53 by sko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <string.h>
#include <stdio.h>


int searchPrice(struct s_art **arts, int n, char *name)
{
    int low = 0;
    int high = n - 1;
    int cur = 0;
    char *check = "";
    while (low <= high)
    {
        cur = (low + high) / 2;
        check = arts[cur]->name;
        if (strcmp(check, name) == 0)
            return cur;
        if (strcmp(check, name) > 0)
            high = cur - 1;
        else
            low = cur + 1;
    }
    return (-1);
}