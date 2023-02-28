/**
 *_strlen - returns length of string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int longs;

	for (longs = 0; *s != '\0'; ++s)
	{
		++longs;
	}

	return (longs);
}
