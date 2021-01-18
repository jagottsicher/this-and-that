#include <stdio.h>
#include <string.h>

int main()
{
	char buffer[100];
	// open input file handler for reading only
	FILE *fileSource = fopen("main.c", "r");
	if (fileSource == NULL)
	{
		puts("Error opening a file.");
		return 1;
	}
	// open output file handler for writing
	FILE *fileDestination = fopen("maincopy.c", "w");
	if (fileDestination == NULL)
	{
		puts("Error opening a file.");
		return 1;
	}

	int i = 0;
	int isLastWholeLine = 1;
	// as long getting string of 100 chars into the buffer ...
	while (fgets(buffer, sizeof(buffer), fileSource))
	{
		// store length of each buffered line
		int len = strlen(buffer);
		// is this a line to be written? Yes
		if (isLastWholeLine)
		{
            // write buffer as a formatted line (a string) and a line number in front of it to the destination
			fprintf(fileDestination, "%d: %s", i, buffer);
			// raise the line number counter for next line
			i++;
		}
		else // if this is the last line without a termination character
			fprintf(fileDestination, "%s", buffer);

		if (buffer[len - 1] == '\n') // check if the last char of the current buffer is \n
			isLastWholeLine = 1; // this was a full line
		else
			isLastWholeLine = 0; // Buffer is not a full line, so the last line
	}

	//close both files
	fclose(fileSource);
	fclose(fileDestination);
	return 0;
}
