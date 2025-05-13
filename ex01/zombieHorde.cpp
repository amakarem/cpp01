/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:29:44 by aelaaser          #+#    #+#             */
/*   Updated: 2025/05/13 19:51:04 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombieHorde;

	zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		// zombieHorde[i] = Zombie(name + "_" + std::to_string(i));
		zombieHorde[i] = Zombie(name);
	}
	return (zombieHorde);
}
