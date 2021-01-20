#include <stdio.h>
#include <string.h>

int main()
{
	char buffer[10];
	// opening source
	FILE *fileSource = fopen("main.c", "r");
	if (fileSource == NULL)
	{
		puts("Error opening file.");
		return 1;
	}
    // setting fixed part of filename for copy
	char filename[FILENAME_MAX] = "maincopy.c";

	// open a handler to a file in read mode only which becomes true (existing) in case the file exists
	FILE *fileExistsHandler = fopen(filename, "r");

	int triesLimit = 6; // try max 1000 times
	int triesCount = 0; // set counter to try
	while(fileExistsHandler) // repeat until a not already existing file handler is found
	{
		fclose(fileExistsHandler); // close file
		triesCount++; // raise counter
		if (triesCount > triesLimit) //if maximum nunber of copies reached return an error
		{
			puts("File count limit reached.");
			return 1;
		}
		sprintf(filename, "maincopy_%d.c", triesCount); // print a formatted string into the string variable filename
		fileExistsHandler = fopen(filename, "r"); // try opening the file handler to a new filename for reading only
	}
	// if filename (by checking if it exists) is found it needed to be opened for writing.
	FILE *fileDestination = fopen(filename, "w");
	// if there is another problem we stop here
	if (fileDestination == NULL)
	{
		puts("Error opening file.");
		return 1;
	}
	// read a line as long there is a line to read from the source into a buffer
	while (fgets(buffer, sizeof(buffer), fileSource))
	{
		// and write that buffered line to the destination
		fprintf(fileDestination, "%s", buffer);
	}
	// close both files
	fclose(fileSource);
	fclose(fileDestination);
	return 0;
	// 1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
}
