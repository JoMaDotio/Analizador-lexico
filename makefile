clear: 
	del *.exe

mmake: .\main.cpp .\analizadorLexico.hpp 
	g++ -std=c++17 -o analizadorLexico.exe .\main.cpp .\analizadorLexico.hpp
	

exe: .\analizadorLexico.exe
	.\analizadorLexico.exe

	