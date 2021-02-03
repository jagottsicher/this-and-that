#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[]) {
	FILE *inp;
	unsigned char buffer[1024]; /* 1 kilobyte */
	int i, read;

	// on wrong arguments return
	if(argc != 2) {
		printf("usage: show3 file_name\n");
		return 1;
	}
	// open file (and check if it worked
	if((inp = fopen(argv[1],"rb")) == NULL) {
		printf("Cannot open the file %s\n", argv[1]);
		return 2;
	}
	// int fread(void *mem, int size, int count, FILE *stream);
	// returns an int representing number of portions read properly
	// in our 1 Kb buffer we place one portion of the size of buffer
	// from the FILE stream inp
	// buffer is not a pointer, but a char array = a string. Namae of Stings are already pointers!!!
	do {
		read = fread(buffer,1,sizeof(buffer),inp);
		for(i = 0; i < read; i++)
			printf("%02X",buffer[i]);
	} while (read > 0);


	fclose(inp);
	return 0;
}

