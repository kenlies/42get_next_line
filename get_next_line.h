#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*read_to_stash(int fd, char *stash);
char	*get_line(char *stash);
char	*make_new_stash(char *stash);
char	*ft_strchr(const char *s, int c);
char	*ft_merge(char *stash, char *buf);
size_t	ft_strlen(const char *str);

#endif