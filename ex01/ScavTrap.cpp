/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:55:05 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/30 11:41:59 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Unknown", 100, 50, 20){
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs){
	ClapTrap::operator=(rhs);
	return *this;
}
	
void	ScavTrap::attack(const std::string& target){
	if (this->_energy_points > 0)
		{	
			this->_energy_points--;
			std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		}
		else
			std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
}

void 	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_name << " is in Gate Keeper mode." << std::endl;
}