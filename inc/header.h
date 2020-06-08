#ifndef HED_H
#define HED_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int error_check(const char *strlen, int amount);
int my_atoi(char b[99],int kol);
void check_morse(const char *str, int kol);
int my_strlen(const char *b);
int main(int argc, char *argv[]);
#endif
