/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:06:57 by melanieyane       #+#    #+#             */
/*   Updated: 2024/04/30 21:04:42 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap vulpix("Vulpix");

    vulpix.attack("Psyduck");
    vulpix.takeDamage(30);
    vulpix.beRepaired(10);

    vulpix.highFivesGuys();

    return 0;
}