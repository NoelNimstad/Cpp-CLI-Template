name := template

build:
	g++ src/*.c++ src/commands/*.c++ -o ${ name }