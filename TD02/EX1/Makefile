run:	main
	./main
	rm *.o
	rm *.h.gch
	rm main
	
main: main.o CString.o CString.h
	g++ -o main main.o CString.o CString.h
	
main.o: main.cpp CString.h
	g++ -c main.cpp CString.h
	
CString.o: CString.cpp CString.h
	g++ -c CString.cpp CString.h
	
