/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:06:49 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/30 10:19:32 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "ClapTrap.hpp"
	
	ClapTrap::ClapTrap() : _name("Unknown"), _hit_points(10), _energy_points(10), _attack_damage(0){
		std::cout << "ClapTrap default constructor called" << std::endl;
	}
	
	ClapTrap::ClapTrap(ClapTrap const & src){
		std::cout << "ClapTrap copy constructor called" << std::endl;
		*this = src;
	}
	
	ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0){
		std::cout << "ClapTrap constructor called" << std::endl;
	}
		
	ClapTrap::~ClapTrap(){
		std::cout << "ClapTrap destructor called" << std::endl;
	}

	std::string	ClapTrap::getName() const{
		return this->_name;
	}

	unsigned int	ClapTrap::getHitPoints() const{
	return this->_hit_points;
	}

	unsigned int	ClapTrap::getEnergyPoints() const{ 
		return this->_energy_points;
	}

	unsigned int	ClapTrap::getAttackDamage() const{
		return this->_attack_damage;
	}

	ClapTrap& ClapTrap::operator=(const ClapTrap& rhs){
		if (this != &rhs)
		{
			this->_name = rhs.getName();
			this->_hit_points = rhs.getHitPoints();
			this->_energy_points = rhs.getEnergyPoints();
			this->_attack_damage = rhs.getAttackDamage();
		}
		return *this;
	}
		
	void	ClapTrap::attack(const std::string& target){
		if (this->_energy_points > 0)
		{	
			this->_energy_points--;
			std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
	}
	void	ClapTrap::takeDamage(unsigned int amount){
		if (this->_hit_points > amount)
		{
			this->_hit_points -= amount;
			std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
			std::cout << "ClapTrap " << this->_name << " has " << this->_hit_points << " hit points left!" << std::endl;
		}
		else{
			if (this->_hit_points > 0)
			{
				std::cout << "ClapTrap " << this->_name << " took " << this->_hit_points << " points of damage!" << std::endl;
				this->_hit_points = 0;
			}
			else
				std::cout << "ClapTrap " << this->_name << " cannot take any more damage." << std::endl;
			std::cout << "ClapTrap " << this->_name << " is out of hit points!" << std::endl;
		}
	}
	
	void	ClapTrap::beRepaired(unsigned int amount){
		if (this->_energy_points > 0)
		{
			this->_energy_points --;
			std::cout << "ClapTrap " << this->_name << " repaired " << amount << " hit points!" << std::endl;
			this->_hit_points += amount;
			std::cout << "ClapTrap " << this->_name << " has " << this->_hit_points << " hit points left!" << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;		
	}