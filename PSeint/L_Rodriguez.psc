Proceso L_Rodriguez
	Definir partido_g,partido_e,partido_p,total_j,total_ptos,porcentaje_partidos,ptos Como real;       
	Definir nombre_equipo Como Caracter;
	Escribir "cual es el nombre de tu equipo ";
	leer nombre_equipo;
	Escribir "cuantos partidos ganaron ";
	Leer partido_g;
	Escribir "cuantos partidos empataron ";
	Leer partido_e;
	Escribir "cuantos partidos perdieron ";
	Leer partido_p;
	total_j<-partido_g+partido_e+partido_p;
	Escribir "el equipo ",nombre_equipo," tiene un total de ",total_j," juegos";
	total_ptos<-(partido_g*3)+(partido_e*1)+(partido_p*0);
	Escribir "el equipo ",nombre_equipo," tiene un total de ",total_ptos," puntos";
	ptos<-3;
	porcentaje_partidos<-total_j*ptos/total_ptos;
	Escribir "el porcentaje de los puntos obtenidos es de ",porcentaje_partidos;
	
	
	
FinProceso
