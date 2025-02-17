/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:05:37 by angerard          #+#    #+#             */
/*   Updated: 2025/02/17 16:28:29 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPts(10), _energyPts(10), _attackDmg(0)
{
    std::cout << "Claptrap " << _name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "ClapTrap " << _name << " copied" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPts = other._hitPts;
        _energyPts = other._energyPts;
        _attackDmg = other._attackDmg;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTtrap " << _name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (_energyPts > 0 && _hitPts > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDmg << " pts of damage" << std::endl;
        _energyPts--;
    } else {
        std::cout << "ClapTrap " << _name << " has no energy or hit pts left to attack" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPts -= amount;
    if (_hitPts < 0) {
        _hitPts = 0;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " pts of damage. Remaining HP: " << _hitPts << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPts > 0 && _hitPts > 0) {
        _hitPts += amount;
        _energyPts--;
        std::cout << "ClapTrap " << _name << " repairs itself, recovering " << amount << " hit pts. Remaining HP: " << _hitPts << " Energy: " << _energyPts << std::endl;
    } else {
    std::cout << "ClapTrap " << _name << " has no energy or hit pts left to repair" << std::endl;
    }
}
