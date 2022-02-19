#pragma warning(disable:4996)

#include <cstdio>
#include <cstring>
#include <conio.h>

/*
	Source by Programiz
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	int c;
	FILE* fp;
	fp = fopen("file.txt", "a");
	char str[20] = "Hello Again.";

	if (fp) {
		putc('\n', fp);

		for (int i = 0; i < strlen(str); i++) {
			putc(str[i], fp);
		}	
	}

	_getch();
	fclose(fp);
}