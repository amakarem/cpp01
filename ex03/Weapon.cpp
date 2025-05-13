/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:09:29 by aelaaser          #+#    #+#             */
/*   Updated: 2025/05/13 20:50:15 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	setType(_type);
}
Weapon::~Weapon()
{

}
void Weapon::setType(std::string _type)
{
	this->type = _type;
}
std::string	Weapon::getType() const
{
	return (this->type);
}
