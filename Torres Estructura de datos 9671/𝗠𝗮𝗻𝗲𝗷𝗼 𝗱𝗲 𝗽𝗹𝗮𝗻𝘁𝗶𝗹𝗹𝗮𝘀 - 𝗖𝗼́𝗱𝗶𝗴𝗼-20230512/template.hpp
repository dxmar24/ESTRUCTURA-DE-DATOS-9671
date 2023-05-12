#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <iostream>

// Declaración
template <typename T>   //1. plantilla
class Calculadora {     //2. clase
	private:            //3. metodos
		T num1, num2;   //asignamos dos variables de tipo T
	public:
		Calculadora(T n1, T n2) : num1(n1), num2(n2){}; //instanciamos las clases, es como poner this.num1=n1
		void operaciones(); //
		T suma();           //
		T resta();          // Todo esto debe estar en una Interfaz
		T producto();       //
		T division();       //
};

#endif
