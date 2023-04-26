:: Compilo c+odigo objeto
g++ -Wall -std=c++11 -c .\src/Pedido.cpp -o Pedido.o -I.\include
g++ -Wall -std=c++11 -c .\src/Bulto.cpp -o Bulto.o -I.\include
g++ -Wall -std=c++11 -c .\src/Cliente.cpp -o Cliente.o -I.\include
g++ -Wall -std=c++11 -c .\src/Caja.cpp -o Caja.o -I.\include
g++ -Wall -std=c++11 -c .\src/Empresa.cpp -o Empresa.o -I.\include
g++ -Wall -std=c++11 -c .\src/HojaDeRuta.cpp -o HojaDeRuta.o -I.\include
g++ -Wall -std=c++11 -c .\src/Transporte.cpp -o Transporte.o -I.\include
g++ -Wall -std=c++11 -c .\src/Tarifa.cpp -o Tarifa.o -I.\include
g++ -Wall -std=c++11 -c main.cpp -o main.o -I.\include

:: Compilo el Binario
g++ -Wall -std=c++11 Cliente.o Caja.o Pedido.o Bulto.o Empresa.o HojaDeRuta.o Transporte.o Tarifa.o main.o -o .\main.exe -I.\include 

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto el binario:
main.exe