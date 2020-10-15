/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// main function takes the number from the command line
// whose square root we want to calculate
int main(int argc, char* argv[]) {
	
	if (argc != 2) {                     // if required number of arguments is not given
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(input < 0)
	{
		input = -1*input;
		printf("Sqrt of %d is %fi\n",-1*input,sqrt(input));
	}else{
		printf("Sqrt of %d is %f\n",input,sqrt(input));
	}
	printf("End of program.Exiting.\n");
	return(0);
} // end main
