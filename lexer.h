#ifndef LEXER_H
#define LEXER_H

#define FLAG_UNDEFINED  0
#define FLAG_OPERATOR   1
#define FLAG_OTHER      2

#define MAX_TOKEN_SIZE  30


typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned short ushort;

typedef enum {
    LITERAL, KEYWORD, IDENTIFIER, OPERATOR, ERROR, STRING, CHARACTER
} token_type;

typedef struct {
    char lexeme[20];
    token_type type;
} token_t;

void setup_lexer();

ulong lex(const char *code, token_t *token_stream);

#endif
