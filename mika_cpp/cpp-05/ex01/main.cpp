/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcasaubo <fcasaubo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:21:34 by fcasaubo          #+#    #+#             */
/*   Updated: 2025/01/09 16:00:39 by fcasaubo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat  sebas("sebas", 44);
    Bureaucrat  paco("sebas", 70);
    Form        a32("a32", 60, 15);
    std::cout << sebas << std::endl;
    std::cout << paco << std::endl;
    std::cout << a32 << std::endl;
    try
    {
        Form    a34("a34", 75, 25);
        a32.beSigned(paco);
        a34.beSigned(paco);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    sebas.signForm(a32);
    return (0);
};

/*
int main(void)
{
	Bureaucrat	pedro;
	pedro = Bureaucrat("Pedro", 12);
	Form a34 = Form("a34", 2, 60);
	try
	{
		pedro.signForm(a34);
		std::cout << a34 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
*/