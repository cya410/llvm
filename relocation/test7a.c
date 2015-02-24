extern int begin(int space, int n);
extern int end(int space, int n);

int main()
{
	int n, c, k, space = 1;
	n = 10;
	space = n - 1;

	// call begin
	space = begin(space, n);

	space = 1;

	// call end
	space = end(space, n);

	return 0;
}
