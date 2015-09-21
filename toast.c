#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//Resize console
	printf("cock");
	system("printf '\e[8;51;101t'");
	system("clear");
	/*wchar_t *diern;
	wchar_t *toast;
	toast= L"\u2551";
	diern= L"\u254E";*/
	//Trace the north road
	for(int i=0; i<18; ++i)
	{
		for(int k=0; k<46; ++k)
		{
			printf(" ");
		}
		for(int k=0; k<2; ++k)
		{
		//	printf("%ls %ls", toast, diern);
		}
	//	printf("\u2551\n");
	}
	//Trace the upper "rond-point"
	for (int i = 0; i < 26; ++i)
	{
		printf(" ");
	}
	printf("\u2554");
	for (int i = 0; i < 19; ++i)
	{
		printf("\u2550");
	}
	printf("\u255D");
	for(int i = 0; i<7; ++i)
	{
		printf(" ");
	}
	printf("\u255A");
	for (int i = 0; i < 19; ++i)
	{
		printf("\u2550");
	}
	printf("\u2557");
	printf("\n");
	//Trace the upper road in the "rond-point"
	for(int i=0; i < 2; ++i)
	{
		for(int i=0; i < 26; ++i)
		{
			printf(" ");
		}
		printf("\u2551");
		for (int i = 0; i < 47; ++i)
		{
			printf(" ");
		}
		printf("\u2551\n");
	}
	//Trace the start of the "rond-point"
	for(int i=0; i < 26; ++i)
	{
		printf(" ");
	}
	printf("\u2551");
	for(int i=0; i < 3; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 41; ++i)
	{
		printf("\u2573");
	}
	for(int i=0; i < 3; ++i)
	{
		printf(" ");
	}
	printf("\u2551");
	printf("\n");
	//Trace West-East entries
	for(int i=0; i < 26; ++i)
	{
		printf("\u2550");
	}
	printf("\u255D");
	for(int i=0; i < 2; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 43; ++i)
	{
		printf("\u2573");
	}
	for(int i=0; i < 2; ++i)
	{
		printf(" ");
	}
	printf("\u255A");
	for(int i=0; i < 26; ++i)
	{
		printf("\u2550");
	}
	printf("\n");
	for(int i=0; i < 29; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 43; ++i)
	{
		printf("\u2573");
	}
	printf("\n");
	for(int i=0; i < 26; ++i)
	{
		printf("\u254C");
	}
	for(int i=0; i < 3; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 43; ++i)
	{
		printf("\u2573");
	}
	for(int i=0; i < 3; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 26; ++i)
	{
		printf("\u254C");
	}
	printf("\n");
	for(int i=0; i < 29; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 43; ++i)
	{
		printf("\u2573");
	}
	printf("\n");
	for(int i=0; i < 26; ++i)
	{
		printf("\u2550");
	}
	for(int i=0; i < 3; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 43; ++i)
	{
		printf("\u2573");
	}
	for(int i=0; i < 3; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 26; ++i)
	{
		printf("\u2550");
	}
	printf("\n");
	for(int i=0; i < 29; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 43; ++i)
	{
		printf("\u2573");
	}
	printf("\n");
	for(int i=0; i < 26; ++i)
	{
		printf("\u254C");
	}
	for(int i=0; i < 3; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 43; ++i)
	{
		printf("\u2573");
	}
	for(int i=0; i < 3; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 26; ++i)
	{
		printf("\u254C");
	}
	printf("\n");
	for(int i=0; i < 29; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 43; ++i)
	{
		printf("\u2573");
	}
	printf("\n");
	for(int i=0; i < 26; ++i)
	{
		printf("\u2550");
	}
	printf("\u2557");
	for(int i=0; i < 2; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 43; ++i)
	{
		printf("\u2573");
	}
	for(int i=0; i < 2; ++i)
	{
		printf(" ");
	}
	printf("\u2554");
	for(int i=0; i < 26; ++i)
	{
		printf("\u2550");
	}
	printf("\n");
	for(int i=0; i < 26; ++i)
	{
		printf(" ");
	}
	printf("\u2551");
	for(int i=0; i < 3; ++i)
	{
		printf(" ");
	}
	for(int i=0; i < 41; ++i)
	{
		printf("\u2573");
	}
	for(int i=0; i < 3; ++i)
	{
		printf(" ");
	}
	printf("\u2551");
	printf("\n");
	for(int i=0; i < 2; ++i)
	{
		for(int i=0; i < 26; ++i)
		{
			printf(" ");
		}
		printf("\u2551");
		for (int i = 0; i < 47; ++i)
		{
			printf(" ");
		}
		printf("\u2551\n");
	}
	//Lower "rond-point"
	for (int i = 0; i < 26; ++i)
	{
		printf(" ");
	}
	printf("\u255A");
	for (int i = 0; i < 19; ++i)
	{
		printf("\u2550");
	}
	printf("\u2557");
	for(int i = 0; i<7; ++i)
	{
		printf(" ");
	}
	printf("\u2554");
	for (int i = 0; i < 19; ++i)
	{
		printf("\u2550");
	}
	printf("\u255D");
	printf("\n");
	for(int i=0; i<19; ++i)
	{
		for(int k=0; k<46; ++k)
		{
			printf(" ");
		}
		for(int k=0; k<2; ++k)
		{
			printf("\u2551 \u254E ");
		}
		printf("\u2551\n");
	}
	return 0;
}
