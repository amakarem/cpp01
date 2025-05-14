/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:41:40 by aelaaser          #+#    #+#             */
/*   Updated: 2025/05/14 16:22:48 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}
Harl::~Harl()
{
	
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}
void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}
void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month.\n\n";
}
void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void	Harl::complain(std::string level)
{
	int	i;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*fun_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int print = 0;

	for(i = 0; i < 4; i++)
	{
		if (level == levels[i])
			print = 1;
		if (print)
		{
			std::cout << "[ " << levels[i] << " ]\n";
			(this->*fun_ptr[i])();
		}
	}
	if (!print)
		std::cout << "[ Probably complaining about insignificant problems ]\n";
}
