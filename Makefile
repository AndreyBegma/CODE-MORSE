NAME = morse

INC = inc/header.h \

HDR = header.h \


SRC =			src/newMorse.c \
			src/check_error.c \
			src/my_strlen.c \
			src/my_check.c \
			src/my_atoi.c \

SRCS = 			 newMorse.c \
			 check_error.c \
			 my_strlen.c \
			 my_check.c \
			 my_atoi.c \


CFLAG = -std=c11 -Wall -Wextra -Wpedantic -Werror

all: install 
install:
	@cp $(SRC) .
	@cp $(INC) .
	@clang $(CFLAG) $(SRCS) -I $(HDR)

uninstall:
	@rm -rf $(SRCS)
	@rm -rf $(HDR)
	@rm -rf $(NAME)

clean:
	@rm -rf $(SRCS)
	@rm -rf $(HDR)
	@rm -rf $(NAME)



reinstall: uninstall all
