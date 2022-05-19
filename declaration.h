#ifndef DECLARATION_H
# define DECLARATION_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_dictionary{
	unsigned int	key;
	char			*value;
}	t_dict;

t_dict		*contain(char *filepath);
char			**ft_split(char *str, char *charset, char *charset2);
int			ft_strlen(char *str);
int			count_strs(char *str, char *charset, char *charset2);
char			*ft_strcat_space(char *ans, char *value);
char			*miketa(unsigned int n, char *ans, t_dict dict[]);
char			*ft_delete_lastspace(char *ans);
void			display(char *ans);
void			ifzero(unsigned int n, char *ans, t_dict dict[]);
unsigned int	ft_power(unsigned int nb, unsigned int power);
void			nketa(unsigned int n, t_dict dict[]);
char			*cut_space_value(char *str);
int			cut_space_key(char *str);
void			ft_putstr(char *str);
unsigned int	ft_strlen_arg(unsigned int argc, char **argv);
long			ft_atoi_mini(int argc, char **argv);
long			ft_argcheck(int argc, char **argv);

#endif
