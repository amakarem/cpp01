/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:39:46 by aelaaser          #+#    #+#             */
/*   Updated: 2025/05/14 16:14:37 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc != 2)
		return (std::cout << "Wrong number of arguments" << std::endl, 0);
	harl.complain(argv[1]);
	return (0);
}
