#ifndef LINE_EDITION2_H
# define LINE_EDITION2_H

#include <term.h>
#include <stdlib.h>
#include <unistd.h>

static struct termios 	old;
static struct termios	termios_p;
static int				size_x;

int putonterm(int c);

#endif