clexer: clean lexer.h lexer.c helper.h helper.c main.c
	gcc -o clexer helper.c lexer.c main.c

clean:
	if [ -f "clexer" ]; then rm clexer; fi
