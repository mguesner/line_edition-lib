#ifndef LINE_EDITION_H
# define LINE_EDITION_H

typedef	struct 					s_line
{
	char						*line;
	int							size;
	int							allocated_size;
	int							err;
}								t_line;

void	line_editor_init();
void	line_editor_end();
t_line	get_line();

#endif