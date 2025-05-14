/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:39:46 by aelaaser          #+#    #+#             */
/*   Updated: 2025/05/14 16:03:39 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;
	std::cout << "++++++++++ DEBUG ++++++++++\n";
	harl.complain("DEBUG");
	std::cout << "++++++++++ INFO ++++++++++\n";
	harl.complain("INFO");
	std::cout << "++++++++++ WARNING ++++++++++\n";
	harl.complain("WARNING");
	std::cout << "++++++++++ ERROR ++++++++++\n";
	harl.complain("ERROR");
	std::cout << "++++++++++ INVALID ++++++++++\n";
	harl.complain("INVALID");
	return (0);
}
