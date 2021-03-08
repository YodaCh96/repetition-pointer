#include <stdio.h>
#include <stdlib.h>

void myPrint(char *string) {
	printf("\n%s\n", string);
}

int main()
{
	int a = 17;
	int b = -6;
	int c;

	int *pointerA;
	int* pointerB;

	pointerA = &a;
	pointerB = &b;

	printf("\nAddress of a: %p", &a);
	printf("\nAddress of pointerA: %p", &pointerA);
	printf("\nValue of a: %d", a);
	printf("\nValue of pointerA: %d\n", *pointerA);

	printf("\nAddress of b: %p", b);
	printf("\nAddress of pointerB: %p", &pointerB);
	printf("\nValue of b: %d", b);
	printf("\nValue of pointerB: %d\n", *pointerB);

	int *pointerC = &c;

	// Variable c ist nicht initialisiert und enthält einen zufälligen Wert.
	printf("\nAddress of c: %p", c);
	printf("\nAddress of pointerC: %p", &pointerC);
	printf("\nValue of c: %d", c);
	printf("\nValue of pointerC: %d\n", *pointerC);

	char character = 'x';

	char *pointer1 = &character;
	char *pointer2 = pointer1;

	*pointer1 = 'X';
	printf("\nInhalt von pointer2: %c\n", *pointer2);

	int array[] = {1, 2, 3, 5, 7};

	// ohne Zeiger
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		printf("\nWert %d: %d", i, array[i]);
	}
	printf("\n");

	// mit Zeiger
	int *arrayIndex = array;
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		printf("\nWert %d: %d", i, *arrayIndex);
		arrayIndex++;

	}
	printf("\n");

	// ohne Zeiger
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		printf("\nEintrag %d:", i);
		printf("\n  Adresse: %p", &array[i]);
		printf("\n  Wert: %d\n", array[i]);
	}
	printf("\n");

	// mit Zeiger
	arrayIndex = array;
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		printf("\nEintrag %d:", i);
		printf("\n  Adresse: %p", arrayIndex);
		printf("\n  Wert: %d\n", *arrayIndex);
		arrayIndex++;
	}
	printf("\n");

	char name[] = "Ioannis Christodoulakis";

	myPrint(name);

	return EXIT_SUCCESS;
}
