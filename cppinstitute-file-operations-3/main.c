#include <stdio.h>
#include <string.h>

int main()
{
	char buffer[100];
	FILE *fileSource = fopen("main.c", "r");
	if (fileSource == NULL)
	{
		puts("Error opening file.");
		return 1;
	}
	char filename[FILENAME_MAX] = "maincopy.c";
	FILE *fileExistsHandler = fopen(filename, "r");
	int triesLimit = 1000;
	int triesCount = 0;
	while(fileExistsHandler)
	{
		fclose(fileExistsHandler);
		triesCount++;
		if (triesCount > triesLimit)
		{
			puts("File count limit reached.");
			return 1;
		}
		sprintf(filename, "maincopy_%d.c", triesCount);
		fileExistsHandler = fopen(filename, "r");
	}
	FILE *fileDestination = fopen(filename, "w");
	if (fileDestination == NULL)
	{
		puts("Error opening file.");
		return 1;
	}
	while (fgets(buffer, sizeof(buffer), fileSource))
	{
		fprintf(fileDestination, "%s", buffer);
	}
	fclose(fileSource);
	fclose(fileDestination);
	return 0;
}
