#include <time.h>
#include <math.h>
#include <stdio.h>

/* These commands inform the compiler to refer to the named
sources already in existence in order to successfully compile
the new program.  These sources contain the code defining
the operations of commands used in this program. */

main() {

/* This signifies the beginning of the main body of the program.*/

	char r[1000];

/* This sets a maximum on the number of characters allowed in
a response given by the user of the program. */

/* The following is the limited "library" of responses the program
may use in order to converse with the human interactor. */

	char *strings[]= {   "\nAhhh.\n\n",
	"\nAnd?\n\n",
	"\nTell me more.\n\n",
	"\nNo kidding?!\n\n",
	"\nI see.\n\n",
	"\nSooooo?\n\n",
	"\nAnd how does that make you feel?\n\n",
	"\nWhat do you associate with the word 'guacamole'?\n\n",
	"\nYou don't say?!\n\n",
	"\n*snigger*\n\n",
	"\nNothing personal, but you are kidding... aren't you?\n\n",
	"\nYawn.\n\n",
	"\nNo! Really?\n\n",
	"\nAnd why do you think that might be?\n\n",
	"\nTell me about your childhood.\n\n",
	"\nElaborate... I feel there's something you're not telling me here.\n\n",
	"\nCould you just repeat that a little louder, talking into this inconspicuous daffodil please?\n\n",
	"\nNurse Smith!!!\n We got a live one here, baby!!!\n\n",
	"\nTell me, what size do you take in strait-jackets?\n\n",
	"\nWhat do you associate with the word 'hippo'?\n\n",
	"\nI'd like to recommend you read this book. I feel could help you overcome your perversions... It's called 'Immuno-aspects of the Spleen'.\n\n"};

/* Now the program, armed with its conversation pieces, prompts
for the user's first response. */

	printf ("\n\n\n\n\n\nWelcome to Dr Quack's consulting room.\n");
	printf ("Please feel free to divulge all of your deepest secrets.\n");
	printf ("Rates are by the hour or part thereof.\n");
	printf ("To leave the session simply type 'bye'.\n");
	printf ("Thank you.\n\n\n\n");

	printf ("So, how are you today?\n\n");
	gets(r);
	printf ("\nHmm. That good, eh?\n\nI think we should talk about this. So, if your sitting comfortably... SPILL THE BEANS!\n\n");

/* Having delivered its own lines, the program now prompts
for the users reply and reads in the information. In this
case the only patterns it need match are a null string,
ie no input, or the exiting statement "bye". */

	gets(r);

/* An anchor is now set in order to start conversation
again at a later stage without restarting the whole program.*/

start:

/*Here the program checks for the recognised Quit statement,
and if it finds it will cease to operate at once. */

	if(r[0] == 'b' && r[1] == 'y' && r[2] == 'e' )
		{ printf ("\nGoodbye.  See you again. \n\n");
		exit (0);}

	else {if(r[0] == '\0')
	{printf ("\nTell me, you godforsaken toad, why do you have such a problem with polite conversation?!\n *smeghead*\n\n");
			gets(r); }

	else

/* This loop tells the program to check for the null
reply. If the response obtained is neither "bye" nor the
null statement, it will randomly select a response from its
library, using a function which is time dependent.*/

while ((r[0] != '\0') && (r[0] != 'b' && r[1] != 'y' && r[2] !=
'e' )){
			srandom(time(0));
			printf("%s\n", strings[random()%21]);
			gets(r); }

/* Here, if the program reads a null response it will
prompt the user to respond again. */

	if(r[0] == 'b' && r[1] == 'y' && r[2] == 'e' )
		{printf("\nBye.\n\n");
		exit (0);}

/* Here, where the response is still a null string, the
program prompts one more time for response and if none is
returned will quit automatically. */

	if(r[0]=='\0')printf("\nAhh, come now, don't be shy. You cant help being such a pathetic weed, and no-one expects you to try. There, there, now.\n\n");
	gets(r);
        if (r[0] != '\0')goto start;
end:

/* Where the read response is "bye" the program quits. */

	if(r[0]=='\0')printf("Be like that then!\n\n*sniffle*\n\nGoodbye!\n\n");
} }

