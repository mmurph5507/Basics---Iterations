all: basics-iterations.exe

clean:
	rm main.o basics-iterations.exe

basics-iterations.exe: main.o
	g++ -g -o basics-iterations main.o

main.o:
	g++ -c -g main.cpp