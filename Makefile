all:
	@# cat
	@echo -- compiling cat --
	@rm -rf bin
	@mkdir bin
	g++ src/cat/main.cpp -o bin/cat -Werror -O2
	
	@# ls
	@echo -- compiling ls --
	g++ src/ls/main.cpp -o bin/ls -Werror -O2

build: all

clean:
	rm -rf bin
