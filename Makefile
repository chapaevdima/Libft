# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anatasha <anatasha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 17:09:32 by anatasha          #+#    #+#              #
#    Updated: 2021/10/19 14:36:38 by anatasha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_atoi.c			ft_isalnum.c\
			ft_isdigit.c		ft_memcpy.c\
			ft_strchr.c			ft_strlcpy.c\
			ft_strnstr.c		ft_bzero.c\
			ft_isalpha.c		ft_isprint.c\
			ft_memmove.c		ft_strdup.c\
			ft_strlen.c			ft_tolower.c\
			ft_calloc.c			ft_isascii.c\
			ft_memchr.c			ft_memset.c\
			ft_strlcat.c		ft_strncmp.c\
			ft_toupper.c		ft_memcmp.c\
			ft_strrchr.c		ft_substr.c\
			ft_strjoin.c		ft_strtrim.c\
			ft_split.c			ft_itoa.c\
			ft_strmapi.c		ft_striteri.c\
			ft_putchar_fd.c		ft_putstr_fd.c\
			ft_putendl_fd.c		ft_putnbr_fd.c

SRCS_B	=	ft_lstclear_bonus.c			ft_lstadd_back_bonus.c\
			ft_lstadd_front_bonus.c		ft_lstdelone_bonus.c\
			ft_lstiter_bonus.c			ft_lstlast_bonus.c\
			ft_lstmap_bonus.c			ft_lstnew_bonus.c\
			ft_lstsize_bonus.c

HEADER 	=	libft.h
OBJ 	=	$(SRCS:%.c=%.o)
OBJ_B 	=	$(SRCS_B:%.c=%.o)

CC 		=	gcc
FLAGS 	=	-Wall -Werror -Wextra

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

bonus	:	${OBJ_B}
	ar rcs ${NAME} ${OBJ_B}

clean	:
	rm -f $(OBJ) $(OBJ_B)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all
