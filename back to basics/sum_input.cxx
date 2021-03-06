3/*
 * sum_input.cxx
 * 
 * Copyright 2019 Eduardo Hermosilla <eduardohermosilla@iMac-de-Eduardo.local>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

int main()
{
	std::cout << "Suma de los numeros que introduzcas" << std::endl; 
	
	int sum = 0, value = 0;
	
	while (std::cin >> value)
		sum += value; 
		
	// Mientras que no se introduzca una entrada de tipo entero pasa a:
	std::cout << "Sum is: " << sum << std::endl;
	
    return 0;
}
// Pasan cosas raras al introducir float
