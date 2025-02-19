/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:11:05 by angerard          #+#    #+#             */
/*   Updated: 2025/02/19 10:18:32 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("Claptrap_One");
    ScavTrap scavtrap("Scavtrap_One");
    FragTrap fragtrap("FragTrap_one");

    claptrap.attack("target_1");
    scavtrap.attack("target_2");
    fragtrap.attack("target_3");
    fragtrap.highFivesGuys();
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(30);
    fragtrap.takeDamage(100);
    fragtrap.beRepaired(50);

    return 0;
}
