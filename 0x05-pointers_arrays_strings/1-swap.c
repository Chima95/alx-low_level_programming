/**
 * reset_to_98 - takes a pointer to an int parameter
 *               and updates the value it points to 98
 *
 * @n: int parameter
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
  int temp;

temp = *a;
*a = *b;
*b = temp;
}
