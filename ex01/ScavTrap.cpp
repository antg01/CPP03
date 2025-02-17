/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:22:34 by angerard          #+#    #+#             */
/*   Updated: 2025/02/17 16:38:17 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPts = 100;
    _energyPts = 50;
    _attackDmg = 20;
    std::cout << "ScavTrap " << _name << " constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap " << _name << " copied" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap " << _name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_energyPts > 0 && _hitPts > 0) {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDmg << " pts of damage" << std::endl;
        _energyPts--;
    } else {
        std::cout << "ScavTrap " << _name << " has no energy or hit pts left to attack" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode" << std::endl;
}
