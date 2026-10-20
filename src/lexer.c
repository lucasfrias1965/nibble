#include "lexer.h"
#include <stdlib.h>



uint32_t get_token(char * word){
	//get_token -> given a word, returns the 
	//appropriate token. essentially just a big
	//pattern match that assigns each value
	//a numerical value for our lexer to make sense of



}

ResultType pre_lexer_check(char * filename){
	//pre_lexer_check -> given our target (char * filename)
	//checks if there exist any egregious errors that allow 
	//us not to compile our progam (safety checks)

	FILE * file_ptr = fopen(filename, 'r');
	//just adding this as an abudance of caution
	fseek(file_ptr, 0, SEEK_END);
	
	//now let's process it word for for word	
}

