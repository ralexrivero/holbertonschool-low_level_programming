# makefile
# variables
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89
STYLE = betty -r
# clean output files

fclean:
	$(RM) 0-linear 1-binary 100-jump 102-interpolation 103-exponential 104-advanced_binary 105-jump

# betty style

betty:
	$(STYLE) *.h *.c

# compilation

%:
	$(CC) $(CFLAGS) $(SRC)

0: SRC=main_files/$*-main.c 0-linear.c -o 0-linear

1: SRC=main_files/$*-main.c 1-binary.c -o 1-binary

100: SRC=main_files/$*-main.c 100-jump.c -lm -o 100-jump

102: SRC=main_files/$*-main.c 102-interpolation.c -o 102-interpolation

103: SRC=main_files/$*-main.c 103-exponential.c -o 103-exponential

104: SRC=main_files/$*-main.c 104-advanced_binary.c -o 104-advanced_binary

105: SRC=main_files/$*-main.c 105-jump_list.c listint/*.c -lm -o 105-jump
