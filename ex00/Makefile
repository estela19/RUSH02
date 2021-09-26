# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/26 18:05:13 by sooykim           #+#    #+#              #
#    Updated: 2021/09/26 23:28:53 by sooykim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES = .c .o

CC = gcc

SRCDIR = src/
INC = include/
LIBS = lib/

TARGET_SRC := $(SRCDIR)main.c
TARGET_OBJ := $(SRCDIR)main.o
STATIC_LIB := $(LIBS)libdict.a

SRCS_FOR_LIB:=$(SRCDIR)convert.c $(SRCDIR)convert2.c $(SRCDIR)dic.c $(SRCDIR)load.c $(SRCDIR)utility.c $(SRCDIR)module.c
OBJS_FOR_LIB:=$(SRCS_FOR_LIB:.c=.o)

CFLAGS += -Wall -Wextra -Werror -I $(INC)

TARGET=rush-02

all: $(TARGET)

$(TARGET): $(TARGET_OBJ) $(STATIC_LIB)
	$(CC) $(CFLAGS) -o $@ $< -L $(LIBS) -ldict

$(SRCDIR)%.o: $(SRCDIR)%.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	rm -f $(OBJS_FOR_LIB) $(TARGET_OBJ) $(LIBS)*

fclean: clean
	rm -f $(TARGET)

$(STATIC_LIB): $(OBJS_FOR_LIB)
	ar rc $@ $^