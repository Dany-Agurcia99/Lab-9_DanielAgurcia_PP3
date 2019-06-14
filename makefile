run: Main.o Persona.o Cliente.o Repartidor.o EmpleadoOficina.o Negocio.o Producto.o Orden.o 
	g++ Main.o Persona.o Cliente.o Repartidor.o EmpleadoOficina.o Negocio.o Producto.o Orden.o -o run
Main.o: Main.cpp Persona.h Cliente.h Repartidor.h EmpleadoOficina.h Negocio.h Producto.h Orden.h 
	g++ -c Main.cpp
Persona.o: Persona.h Persona.cpp
	g++ -c Persona.cpp
Cliente.o: Cliente.h Cliente.cpp
	g++ -c Cliente.cpp
Repartidor.o: Repartidor.h Repartidor.cpp
	g++ -c Repartidor.cpp
EmpleadoOficina.o: EmpleadoOficina.h EmpleadoOficina.cpp
	g++ -c EmpleadoOficina.cpp
Negocio.o: Negocio.h Negocio.cpp
	g++ -c Negocio.cpp
Producto.o: Producto.h Producto.cpp
	g++ -c Producto.cpp
Orden.o: Orden.h Orden.cpp
	g++ -c Orden.cpp