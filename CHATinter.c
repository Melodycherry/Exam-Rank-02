/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:32:31 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/07 16:34:35 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int has_already_been_printed(char *str, char c, int index) {
    int i = 0;
    while (i < index) {
        if (str[i] == c) {
            return 1;
        }
        i++;
    }
    return 0;
}

void inter(char *str1, char *str2) {
    int i = 0;
    while (str1[i]) {
        int j = 0;
        while (str2[j]) {
            if (str1[i] == str2[j] && !has_already_been_printed(str1, str1[i], i)) {
                write(1, &str1[i], 1);
                break;
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv) {
    if (argc == 3) {
        inter(argv[1], argv[2]);
    } else {
        write(1, "\n", 1);
    }
    return 0;
}