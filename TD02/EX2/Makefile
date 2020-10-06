run: main
	./main

main: main.o Vecteur.o Vecteur.h    
	g++ -o main main.o Vecteur.o Vecteur.h

main.o: main.cpp Vecteur.h
	g++ -c main.cpp Vecteur.h

Vecteur.o: Vecteur.cpp Vecteur.h
	g++ -c Vecteur.cpp Vecteur.h

clear:
	rm *.o
	rm *.gch
	rm main
