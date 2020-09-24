run: exercice6
	./exercice6
	
exercice6: exercice6.o Definition.o CString.o Definition.h CString.h
	g++ -o exercice6 exercice6.o Definition.o CString.o Definition.h CString.h
	
exercice6.o: exercice6.cpp CString.h
	g++ -c exercice6.cpp CString.h
	
Definition.o: Definition.cpp CString.h
	g++ -c Definition.cpp Definition.h CString.h
	
	
CString.o: CString.cpp CString.h
	g++ -c CString.cpp CString.h
	
clear:
	rm *.o
	rm *.h.gch
	rm exercice6
	
