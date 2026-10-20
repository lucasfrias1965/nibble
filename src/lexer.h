#include <stdio.h>
#include <stdint.h>


typedef uint32_t nibble_token;

typedef struct {
	uint8_t error_code;
	char err_message[64];
} ResultType;

ResultType pre_lexer_check(char * filename);



