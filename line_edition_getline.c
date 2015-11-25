#include <line_edition2.h>
#include "line_edition.h"

t_line	get_line()
{
	t_line	line;
	int		pos = 0;
	int		ret;
	int 	ch = 0;

	line.size = 0;
	line.line = malloc(50);
	line.line[0] = 0;
	line.allocated_size = 50;
	while ((ret = read(0, &ch, 4)) > 0)
	{
		ch = 0;
	}
	return line;
}