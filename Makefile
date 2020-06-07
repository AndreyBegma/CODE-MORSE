NAME = morse

INC = inc/header.h

HDR = header.Iinh \


SRC = src/check_error.c \
			src/newMorse.c \
			src/my_strlen.c \
			src/my_check.c \
			src/my_atoi.c \

SRCS = check_error.c \
			 newMorse.c \
			 my_strlen.c \
			 my_check.c \
			 src/my_atoi.c \


CFLAG = -std=c11 -Wall -Wextra -Wpedantic -Werror

all: install clean
install:
	@cp $(SRC) .
	@cp $(INC) .
	@clang $(CFLAG) $(SRCS) -o $(NAME) -I $(HDR)

uninstall:
	@rm -rf $(SRCS)
	@rm -rf $(HDR)
	@rm -rf $(NAME)

clean:
	@rm -rf $(SRCS)
	@rm -rf $(HDR)

reinstall: uninstall all