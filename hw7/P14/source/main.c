#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fptr;
	char ch;
	int count = 0;

	fptr = fopen("C://Users/user/OneDrive/�ୱ/ch7/hw7/hw7/P14/welcome.txt", "r"); //P14���ɮ׸��|
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else
		printf("�ɮ׶}�ҥ���!\n");
	system("pause");
	return 0;
}