#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[]) {
	FILE *inp;
	int  chr;

	/* check if there is one argument */
	if(argc != 2) {
		printf("usage: show file_name\n");
		return 1;
	}

	/* check if we are able to open the input file */
	if((inp = fopen(argv[1],"rt")) == NULL) {
		printf("Cannot open the file %s\n", argv[1]);
		return 2;
	}

	/* we will try to read the file char by char and print the chars to screen */

	while((chr = fgetc(inp)) != EOF)
		printf("%c",chr);

	/* it's time to close the stream */
	fclose(inp);
	return 0;
}#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[]) {
	FILE *inp;
	int  chr;

	/* check if there is one argument */
	if(argc != 2) {
		printf("usage: show file_name\n");
		return 1;
	}

	/* check if we are able to open the input file */
	if((inp = fopen(argv[1],"rt")) == NULL) {
		printf("Cannot open the file %s\n", argv[1]);
		return 2;
	}

	/* we will try to read the file char by char and print the chars to screen */

	while((chr = fgetc(inp)) != EOF)
		printf("%c",chr);

	/* it's time to close the stream */
	fclose(inp);
	return 0;
}
