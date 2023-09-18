/**
*swap_int - swp ints
*@a: input one
*@b: input b
*
*Return: void 
*/
void swap_int(int *a, int *b)
{
int *c = &b;
b = a;
a = c;
}
