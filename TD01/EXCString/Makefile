run: Exo6
	./Exo6
	
Exo6: Exo6.o CString.o CString.h
	g++ -o Exo6 Exo6.o CString.o CString.h
	
Exo6.o: Exo6.cc CString.h
	g++ -c Exo6.cc CString.h
	
CString.o: CString.cc CString.h
	g++ -c CString.cc CString.h

clean:
	rm *.o
	rm *.h.gch
	rm Exo6
