/*
** EPITECH PROJECT, 2017
** my_strncat
** File description:
** task03D07
*/

char *my_strncat(char *dest, char const *src, int nb)
{
	char *ptr = dest + my_strlen(dest);
	int j = 0;

	while (src[j] != '\0' && j < nb) {
		ptr[j] = src[j];
		j++;
	}
	ptr[j] = '\0';
	return (dest);
}
