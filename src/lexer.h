#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>


typedef uint32_t nibble_token;
typedef uint64_t CompilierFlags;

typedef struct {
	uint8_t error_code;
	char err_message[64];
} ResultType;

ResultType pre_lexer_check(char * filename);
void compile_error(unsigned int specifier);
bool validate_string_integrity(char * given_string, const size_t string_size);
CompilierFlags set_flag(CompilierFlags cf, unsigned int type, bool on);
bool get_flag(CompilierFlags cf, unsigned int position);
uint32_t get_token(char * word);
bool is_valid_whitespace(char letter);
