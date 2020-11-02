run: main
	./main
	
main: main.o Definition.o CString.o Definition.h CString.h
	g++ -o main main.o Definition.o CString.o
	
main.o: main.cpp CString.h
	g++ -c main.cpp
	
Definition.o: Definition.cpp CString.h
	g++ -c Definition.cpp
	
	
CString.o: CString.cpp CString.h
	g++ -c CString.cpp
	
clear:
	rm *.o
	rm main
	
