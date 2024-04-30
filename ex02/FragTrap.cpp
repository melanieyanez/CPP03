/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:27:28 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/30 20:57:54 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Unknown", 100, 100, 30){
	std::cout << "FragTrap default constructor called" << std::endl;
	printStats();
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src){
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
	printStats();
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30){
	std::cout << "FragTrap constructor called" << std::endl;
	printStats();
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs){
	ClapTrap::operator=(rhs);
	return *this;
}
	
void 	FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << this->_name << " high fives the guys!" << std::endl;
}