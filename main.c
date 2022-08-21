#include "lexer.h"
#include <stdio.h>

int main(void) {
    setup_lexer();
    token_t tokenstream[100];
    char input_buffer[100];
    printf("Enter C code:\n");
    fgets(input_buffer, 100, stdin);
    ulong j = lex(input_buffer, tokenstream);
    printf("Tokens formed:\n");
    for (int i = 0; i < j; i++) {
        printf("Token:\n");
        printf("\tlexeme: %s\n", tokenstream[i].lexeme);
        switch (tokenstream[i].type) {
            case LITERAL:
                printf("\ttype: LITERAL\n");
                break;
            case IDENTIFIER:
                printf("\ttype: IDENTIFIER\n");
                break;
            case KEYWORD:
                printf("\ttype: KEYWORD\n");
                break;
            case OPERATOR:
                printf("\ttype: OPERATOR\n");
                break;
            case CHARACTER:
                printf("\ttype: CHARACTER LITERAL\n");
                break;
            case STRING:
                printf("\ttype: STRING LITERAL\n");
                break;
            case ERROR:
                printf("\ttype: ERROR\n");
                break;
        }
    }
    return 0;
}
