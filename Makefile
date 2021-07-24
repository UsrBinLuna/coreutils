all:
	@# cat
	@echo -- compiling cat --
	@rm -rf bin
	@mkdir bin
	g++ src/cat/main.cpp -o bin/cat -std=c++11 -O2
	
	@# ls
	@echo -- compiling ls --
	g++ src/ls/main.cpp -o bin/ls -std=c++11 -O2

	@# echo
	@echo -- compiling echo --
	g++ src/echo/main.cpp -o bin/echo -std=c++11 -O2

	@# cp
	@echo -- compiling cp --
	g++ src/cp/main.cpp -o bin/cp -std=c++11 -O2

	@# strip
	@echo -- stripping binaries --
	strip bin/*

build: all

clean:
	rm -rf bin
