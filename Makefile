NAME = libft.a
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c\
	  ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c\
	  ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c\
	  ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c\
	  ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	  ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c\
	  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
	  ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c\
	  ft_putendl_fd.c ft_putnbr_fd.c
BONUS_PART = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlst.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
HEAD = libft.h
FLAGS = -Wall -Wextra -Werror

OBJ_FILES = $(SRC:.c=.o)

.c.o:
	gcc $(FLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES) $(HEAD) 
	@echo "Сборка библиотеки..."
	@ar rcs $(NAME) $(OBJ_FILES) $?
	@echo "Сборка библиотеки выполнена."

bonus:
	@echo "Сборка бонусной части задания.."
	@make SRC="$(BONUS_PART)" all

clean:
	@echo "Удаление объектных файлов.o"
	@rm -f $(OBJ_FILES)
	@echo "Объектные файлы удалены."

fclean: clean
	@echo "Удаление библиотеки..."
	@rm -f $(NAME)
	@echo "Библиотека удалена."

re: fclean all

.PHONY: clean fclean all re