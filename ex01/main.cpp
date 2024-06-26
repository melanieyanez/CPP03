/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:06:57 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/30 21:03:24 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap caterpie;
    ScavTrap jigglypuff("Jigglypuff");
    ScavTrap rattata(jigglypuff);
    
    jigglypuff.attack("Meowth");
    jigglypuff.takeDamage(30);
    jigglypuff.beRepaired(10);
    jigglypuff.attack("Meowth");

    jigglypuff.guardGate();

    return 0;
}