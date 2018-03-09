// Declare second integer, double, and String variables.
	int integer;
	double dble;
	char str[100];

	// Read and save an integer, double, and String to your variables.
	scanf("%i", &integer);
	scanf("%lf", &dble);
	scanf( " %[^\n]s", str);

	// Print the sum of both integer variables on a new line.
	int sum = i + integer;
	printf("%i \n", sum);

	// Print the sum of the double variables on a new line.
	printf("%.1lf \n", d + dble);

	// Concatenate and print the String variables on a new line
	printf("%s%s \n", s, str);

	// The 's' variable above should be printed first.


