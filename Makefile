NAME		=	fractol

header	=	fractol.h

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror -lmlx -framework openGL -framework AppKit -Ofast -fsanitize=address -g 

RM			=	rm -rf

SRCS		=	helps/check_args.c helps/ft_strncmp.c main.c creation/start_mlx.c creation/draw.c creation/mandelbrot.c creation/julia.c creation/burning_ship.c\
				creation/scale_coors.c events/click_events.c events/moves.c events/julia_mouse_move.c zooms/zooms.c zooms/zoom_in.c zooms/zoom_out.c
				
SRCS_BONUS	=	

OBJS		= $(SRCS:.c=.o)

OBJS_BONUS	= $(SRCS_BONUS:.c=.o) 

$(NAME)		: $(OBJS) $(header)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%o:%c $(header)
	$(CC) -Wall -Wextra -Werror -c $< -o $@

all			:	$(NAME)

cm			:	all clean

bonus		: $(BONUS)
	
clean		:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean		: clean
			$(RM) $(NAME) $(BONUS)

re			: fclean all