/*
 * _strcat - take two arguement dest and src
 *
 * Return - concatetinated string
 */

char *_strcat(char *dest, char *src)
{
    int dest_len = strlen(dest);
    int i = 0;

    while (src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';

    return dest;
}