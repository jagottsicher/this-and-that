0: #include <stdio.h>
1: #include <string.h>
2: 
3: int main()
4: {
5: 	char buffer[100];
6: 	// open input file handler for reading only
7: 	FILE *fileSource = fopen("main.c", "r");
8: 	if (fileSource == NULL)
9: 	{
10: 		puts("Error opening a file.");
11: 		return 1;
12: 	}
13: 	// open output file handler for writing
14: 	FILE *fileDestination = fopen("maincopy.c", "w");
15: 	if (fileDestination == NULL)
16: 	{
17: 		puts("Error opening a file.");
18: 		return 1;
19: 	}
20: 
21: 	int i = 0;
22: 	int isLastWholeLine = 1;
23: 	// as long getting string of 100 chars into the buffer ...
24: 	while (fgets(buffer, sizeof(buffer), fileSource))
25: 	{
26: 		// store length of each buffered line
27: 		int len = strlen(buffer);
28: 		// is this a line to be written? Yes
29: 		if (isLastWholeLine)
30: 		{
31:             // write buffer as a formatted line (a string) and a line number in front of it to the destination
32: 			fprintf(fileDestination, "%d: %s", i, buffer);
33: 			// raise the line number counter for next line
34: 			i++;
35: 		}
36: 		else // if this is the last line without a termination character
37: 			fprintf(fileDestination, "%s", buffer);
38: 
39: 		if (buffer[len - 1] == '\n') // check if the last char of the current buffer is \n
40: 			isLastWholeLine = 1; // this was a full line
41: 		else
42: 			isLastWholeLine = 0; // Buffer is not a full line, so the last line
43: 	}
44: 
45: 	//close both files
46: 	fclose(fileSource);
47: 	fclose(fileDestination);
48: 	return 0;
49: }
