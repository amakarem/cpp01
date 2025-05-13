/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:49:22 by aelaaser          #+#    #+#             */
/*   Updated: 2025/05/13 19:35:58 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int N = 5;
	
	horde = zombieHorde(N, "zombie Horde");
 	for (int i = 0; i < N; i++)
	{
       std::cout << "Index " << i << ": ";
	   horde[i].announce();
    }

	delete[] horde;
	return (0);
}
