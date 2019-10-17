#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int printCombos(char[],int, int);
void createCombos();

int main(int argc, char *argv[]) {
	/* Code to parse the command line arguments and create
	the possible set of characters in the password + max-length.
	M = allowed chacters to be entered
	N = max length of password*/
	int M, N, i;
	
	sscanf(argv[1], "%d", &M);
	char arr[M];
	
	for( i = 0; i < M; i++) {
		sscanf(argv[i+2], "%c", &arr[i]);
	}
	
	sscanf(argv[argc - 1], "%d", &N);
	
	printf("%d, %d\n", M, N);
	
    /* Function call to print all password combinations created 
	using characters from ‘arr’ (command line input) having length
	from 1-n (command line input)*/
	printCombos(arr, N);
	
    return 0;
}

int printCombos(char* arr,int M, int N) {
	
}