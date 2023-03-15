/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of array to create
 * @c: char to initialize array with
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
