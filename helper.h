#ifndef LEXER_HELPER_H
#define LEXER_HELPER_H

#include <stdbool.h>

bool contains(const char *string, const char ch);

void assert(int condition, const char *format, ...);

unsigned long compute_hash(const char *string);

unsigned long compute_hash_n(const char *string, const int n);

unsigned long compute_hash2(const char *string);

unsigned long compute_hash2_n(const char *string, const int n);

bool is_alpha_(const char ch);

bool is_digit(const char ch);

bool is_alnum_(const char ch);

#endif
