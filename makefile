clear: 
	del *.exe

mmake: .\main.cpp .\compilador.hpp 
	g++ -std=c++17 -o analizadorLexico.exe .\main.cpp .\compilador.hpp
	

exe: .\analizadorLexico.exe
	.\analizadorLexico.exe

	