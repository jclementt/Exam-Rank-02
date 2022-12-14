/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jclement < jclement@student.42.rio>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:07:42 by jclement          #+#    #+#             */
/*   Updated: 2022/07/30 18:07:42 by jclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
         while (argv[1][i] == 32 || argv[1][i] == 9)
            i++;
        while (argv[1][i] && (argv[1][i] != 32 || argv[1][i] != 9))
        {
            write(1, &argv[1][i], 1);
            i++;

        }
    }
    write(1, "\n", 1);
}