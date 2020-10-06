run:	main
	./main
	rm *.o
	rm main
	
main: main.o CString.o 
	g++ -o main main.o CString.o
	
main.o: main.cpp 
	g++ -c main.cpp
	
CString.o: CString.cpp
	g++ -c CString.cpp
	
