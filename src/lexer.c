#include "lexer.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define PRE_WHITESPACE_PHASE 0
#define KEYWORD_PHASE 1
#define OPERATOR_PHASE 2 
#define EXPRESSION_PHASE 3

typedef CompilierFlags uint64_t;

void compile_error(unsigned int specifier){
        printf("compile error %d", specifier);
        exit(1);
}


CompilierFlags set_flag(CompilierFlags cf, unsigned int type, bool on){
    //CompilierFlags -> given a compilier flag data type, will set a certain flag
    //on or off based on the type (which determines the position from the macros)
    //and the boolean value on/off
    if (type > 63){compile_error(1);}
    if (on) cf |= 1u << type;
    else cf &= ~(1u << type);
    return cf;
}
//get_flag -> given a cf flag and a position, checks to see if that flag is set or not
inline bool get_flag(CompilierFlags cf, unsigned int position) {return (cf & (1u << position)) != 0;}

uint32_t get_token(char * word){
	//get_token -> given a word, returns the 
	//appropriate token. essentially just a big
	//pattern match that assigns each value
	//a numerical value for our lexer to make sense of

}

inline bool is_valid_whitespace(char letter){
        //is_valid_whitespace -> determines whether
        //a character quantifies as whitespace
        return (letter == ' ' || letter == 9);
}


ResultType pre_lexer_check(char * filename){
	//pre_lexer_check -> given our target (char * filename)
	//checks if there exist any egregious errors that allow 
	//us not to compile our progam (safety checks)

	FILE * file_ptr = fopen(filename, "rb");
	//just adding this as an abudance of caution
	
	//now let's process it word for for word	
    char line_buffer[1024] = {0};
    char keyword_buffer[64] = {0};
    CompilierFlags cf = 0;
    set_flag(cf, PRE_WHITESPACE_PHASE, true);
    
    for (char current_char ;current_char = fgetc(file_ptr) && current_char != EOF; ){
       
        //if the pre_whitespace phase is checked 
        if (get_flag(cf, PRE_WHITESPACE_PHASE){
            //whitespace checks
            if (is_valid_whitespace(current_char)) continue;
            //if not whitespace, we need to process the keyword
            set_flag(cf, PRE_WHITESPACE_PHASE, false); 
            set_flag(cf, KEYWORD_PHASE, true); 

        }
        
        if (get_flag(cf, KEYWORD_PHASE)){
            
        }

        

    }



}

