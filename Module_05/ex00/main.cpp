/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:24:27 by gude-jes          #+#    #+#             */
/*   Updated: 2025/01/03 09:50:28 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	{
		std::cout << "Test 1" << std::endl;
		Bureaucrat *bureaucrat = new Bureaucrat("gude-jes", 150);
		std::cout << *bureaucrat << std::endl;
		bureaucrat->incrementGrade();
		std::cout << *bureaucrat << std::endl;
		delete bureaucrat;
		std::cout << std::endl;
	}
	{
		std::cout << "Test 2" << std::endl;
		Bureaucrat *bureaucrat = new Bureaucrat("Abilio", 1);
		std::cout << *bureaucrat << std::endl;
		bureaucrat->decrementGrade();
		std::cout << *bureaucrat << std::endl;
		delete bureaucrat;
		std::cout << std::endl;
	}
	{
		std::cout << "Test 3" << std::endl;
		Bureaucrat *bureaucrat1 = new Bureaucrat("Emilio", 150);
		Bureaucrat *bureaucrat2 = new Bureaucrat("Alberto", 1);
		std::cout << *bureaucrat1 << std::endl;
		std::cout << *bureaucrat2 << std::endl;
		try
		{
			bureaucrat1->decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			bureaucrat2->incrementGrade();	
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		delete bureaucrat1;
		delete bureaucrat2;
		std::cout << std::endl;
	}
	return (0);
}