/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:39:43 by angerard          #+#    #+#             */
/*   Updated: 2025/02/17 16:41:29 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("Claptrap_One");
    ScavTrap scavtrap("Scavtrap_One");

    claptrap.attack("target_1");
    scavtrap.attack("target_2");
    scavtrap.guardGate();
    scavtrap.takeDamage(30);
    scavtrap.beRepaired(20);
    scavtrap.takeDamage(100);
    scavtrap.beRepaired(50);

    return 0;
}
