# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbattal <rbattal@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/22 17:19:53 by rbattal           #+#    #+#              #
#    Updated: 2023/03/22 17:19:54 by rbattal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client

SRC_server = server.c
SRC_client = client.c

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(SERVER) $(CLIENT)

$(SERVER):
		$(CC) $(CFLAGS) $(SRC_server) -o $(SERVER)
$(CLIENT):
		$(CC) $(CFLAGS) $(SRC_client) -o $(CLIENT)
clean:
		@rm -rf $(SERVER) $(CLIENT)
		@echo "cleaned"
fclean: clean
		@rm -rf $(SERVER) $(CLIENT)
re: clean all

.PHONY: all clean fclean re
