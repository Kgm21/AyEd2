:: Compilo c+odigo objeto
g++ -Wall -std=c++11 -c .\src\Cliente.cpp 
g++ -Wall -std=c++11 -c .\src\Pedido.cpp
g++ -Wall -std=c++11 -c .\src\Articulo.cpp
g++ -Wall -std=c++11 -c .\src\Controlador.cpp
g++ -Wall -std=c++11 -c .\src\empleado.cpp 
g++ -Wall -std=c++11 -c app.cpp 

:: Compilo el Binario
g++ Cliente.o Pedido.o Articulo.o Controlador.o app.o empleado.o -o  app.exe

:: Limpio los códigos objeto
DEL .\*.o