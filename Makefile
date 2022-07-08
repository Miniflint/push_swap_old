GREEN = \033[0;32m
RED = \033[0;31m
YELLOW = \033[0;33m

SDIR	= ./src
MDIR	= $(SDIR)/main
UDIR	= $(SDIR)/utils
SORTD	= $(SDIR)/sorting
INSTR	= $(SDIR)/instruct

MSRCS	= main.c checker_correct.c
SRT		= three_five.c bigsort.c sorting_utils.c
USRCS	= handle_things.c ft_strlen.c ft_atoi_array.c ft_isdigit.c ft_substr.c ft_split.c ft_atoi.c __init__.c
INSRC	= swap.c rotate.c push.c reverse_rotate.c


OSSRCS	= $(addprefix $(MDIR)/,$(MSRCS))
SRSRCS	= $(addprefix $(SORTD)/,$(SRT))
OUSRCS	= $(addprefix $(UDIR)/,$(USRCS))
INST	= $(addprefix $(INSTR)/,$(INSRC))

LNAME	= ft_printf/libftprintf.a
FILES	= $(OSSRCS) $(SRSRCS) $(OUSRCS) $(INST) $(SDIR)/checker/checker.c
OBJS	= $(FILES:.c=.o)
CFLAGS	= -Wall -Werror -Wextra 
ifeq ($(DEBUG), debug)
	CFLAGS += -g3
endif
NAME	= push_swap
CC		= gcc $(CFLAGS)

all: $(NAME)

ft_printf_compile:
	@echo "Compiling ft_printf"
	@make -C ft_printf

$(NAME): $(OBJS) ft_printf_compile
	@echo "$(GREEN)\n\nCompiling push_swap..."
	@$(CC) $(OBJS) -o $(NAME) $(LNAME)
	@echo "$(GREEN)Done"

%.o: %.c
	@echo "$(YELLOW)Generating push_swap objects..." $@
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@echo "$(RED)\nDeleting objects..."
	@make -C ft_printf clean
	@rm -f $(OBJS)

fclean: clean
	@echo "$(RED)\nDeleting executable..."
	@make -C ft_printf fclean
	@rm -f $(OBJS)

re: fclean all

.PHONY:	clean fclean all re