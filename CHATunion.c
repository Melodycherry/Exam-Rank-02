/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:18:21 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/07 17:18:42 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Vérifie si un caractère est déjà présent dans une chaîne jusqu'à un index donné
int is_present(char *str, char c, int index) {
    int i = 0;
    while (i < index) {
        if (str[i] == c)
            return 1;  // Le caractère est déjà présent
        i++;
    }
    return 0;  // Le caractère n'est pas présent
}

// Fonction pour afficher l'union des deux chaînes
void union_strings(char *s1, char *s2) {
    int i = 0;
    int index = 0;
    char result[256] = {0};  // Table pour stocker les caractères uniques

    // Traiter la première chaîne
    while (s1[i]) {
        if (!is_present(result, s1[i], index)) {
            result[index] = s1[i];
            index++;
            write(1, &s1[i], 1);
        }
        i++;
    }

    // Réinitialiser `i` pour parcourir la deuxième chaîne
    i = 0;

    // Traiter la deuxième chaîne
    while (s2[i]) {
        if (!is_present(result, s2[i], index)) {
            result[index] = s2[i];
            index++;
            write(1, &s2[i], 1);
        }
        i++;
    }

    // Ajouter un retour à la ligne à la fin
    write(1, "\n", 1);
}

int main(int argc, char **argv) {
    if (argc != 3) {
        write(1, "\n", 1);  // Affiche uniquement un retour à la ligne si le nombre d'arguments est incorrect
        return 0;
    }
    union_strings(argv[1], argv[2]);  // Appel à la fonction principale
    return 0;
}
