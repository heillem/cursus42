NAME = libft.a                                      
CC = cc                                             
CFLAGS = -Wall -Wextra -Werror                      
SRCS = ft_atoi.c ft_isprint.c ft_lstmap.c ft_memset.c ft_strdup.c ft_strncmp.c \
libft.a ft_bzero.c ft_itoa.c ft_lstnew.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c \
libft.h ft_calloc.c ft_lstadd_back.c ft_lstsize.c ft_putendl_fd.c ft_strjoin.c \
ft_strrchr.c lstlast.c ft_isalnum.c ft_lstadd_front.c ft_memchr.c ft_putnumber_fd.c \
ft_strlcat.c ft_strtrim.c ft_isalpha.c ft_lstclear.c ft_memcmp.c ft_putstr_fd.c \
ft_strlcpy.c ft_substr.c ft_isascii.c ft_lstdelone.c ft_memcpy.c ft_split.c \
ft_strlen.c ft_tolower.c ft_isdigit.c ft_lstiter.c ft_memmove.c ft_strchr.c \
ft_strmapi.c ft_toupper.c

OBJS = $(SRCS:.c=.o)                                

all: $(NAME)                                        
	
$(NAME): $(OBJS)                                    
	ar rcs $(NAME) $(OBJS)                      

%.o: %.c                                            
	$(CC) $(CFLAGS) -c $< -o $@                 

clean:                                              
	rm -f $(OBJS)                               

fclean: clean                                       
	rm -f $(NAME)                               

re: fclean $(NAME)                                  

.PHONY: all clean fclean re                         
