/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:06:57 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/30 10:23:48 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    // Default constructor
    ClapTrap clapDefault;
    clapDefault.attack("Pikachu");
    clapDefault.takeDamage(3);
    clapDefault.beRepaired(1);

    // Parameterized constructor
    ClapTrap clapCharmander("Charmander");
    clapCharmander.attack("Bulbasaur");
    clapCharmander.takeDamage(5);
    clapCharmander.beRepaired(2);

    // Copy constructor
    ClapTrap clapCopy(clapCharmander);
    clapCopy.attack("Squirtle");
	clapCopy.takeDamage(12);
	clapCopy.takeDamage(1);
	clapCopy.attack("Pikachu");
	clapCopy.attack("Pikachu");
	clapCopy.attack("Pikachu");
	clapCopy.attack("Pikachu");
	clapCopy.attack("Pikachu");
	clapCopy.attack("Pikachu");
	clapCopy.attack("Pikachu");
	clapCopy.attack("Pikachu");
	clapCopy.beRepaired(10);
    return 0;
}