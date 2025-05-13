/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:49:22 by aelaaser          #+#    #+#             */
/*   Updated: 2025/05/13 16:05:12 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *CrazyZombie;

	CrazyZombie = newZombie("Crazy Zombie");
	CrazyZombie->announce();
	randomChump("Random Zombie");
	delete CrazyZombie;
	return (0);
}