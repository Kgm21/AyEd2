Desarrollo de Sistemas de Transportes

Una empresa de transporte de mercancías por carretera tiene a su disposición una flota propia de camiones y
una serie de conductores particulares que tienen camión propio. Cada camión tiene una fecha de alta como
vehículo, una matrícula y un peso máximo que puede transportar.
Cada conductor particular puede tener en su propiedad varios camiones, y tiene su propia tarifa de cobro por
kilo y kilómetro. Los camiones correspondientes a la flota de la empresa se asignan dinámicamente a los
conductores que ésta tiene en nómina, y tienen todos la misma tarifa que es estipulada por la propia empresa.
Cada conductor, por tanto, puede estar trabajando por cuenta propia o por cuenta ajena. De los mismos se
guardará además, nombre, apellidos, DNI, dirección, provincia, población y teléfono.
Todo conductor (particular o contratado) tiene un código único asignado automáticamente por el sistema.
La empresa opera sobre un conjunto de ciudades las cuales están enlazadas por carretera entre sí. El sistema
de información conocerá el número de kilómetros entre cada ciudad que está unida directamente por
carretera y el tiempo medio que se tarda en recorrer dicho tramo. Cada carretera se identifica a través de un
número de carretera único introducido por el operador. La empresa puede tener en estas ciudades un parque
donde almacenar remolques cargados o descargados. Cada remolque tiene una matrícula, un peso y, caso de
estar cargado, un peso de la carga.
A la empresa llegan solicitudes de envíos de bultos por parte de los clientes. Una solicitud consta de un
número, una fecha, Código del cliente y varias líneas de bultos para enviar.
A su vez, existe una hoja de ruta por viaje que consta de un camión, un chofer, un remolque, el volumen de
la carga en kilos, la ruta, la ciudad de partida, la ciudad de destino, la fecha de partida y la de destino. 
Dentro de esta, está una lista de bultos (paquetes) que serán despachados en el viaje.
Los bultos se tarifan por peso, tamaño y destino, existiendo cuadros tarifarios para cada uno, el resultante es
la suma de los tres valores.
Además, existe una tabla de movimientos de caja con los campos fecha, importe, un campo lógico que
indique si es un pago o un ingreso, y un identificador del pedido si fuera un ingreso, o del conductor pagado,
si fuera un pago.
El diseño a desarrollar debe facilitar la extensibilidad de nuevos tipos menú y combo y a su vez permitir
agregar nuevas consultas, el mismo deberá desarrollarse en UML la parte de Modelado y deberá ser
implementado en C++