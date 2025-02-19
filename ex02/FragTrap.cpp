/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:00:35 by angerard          #+#    #+#             */
/*   Updated: 2025/02/19 10:10:31 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    _hitPts = 100;
    _energyPts = 100;
    _attackDmg = 30;
    std::cout << "FragTrap " << _name << " constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap " << _name << " copied" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout <<  "FragTrap " << _name << " destroyed" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (_energyPts > 0 && _hitPts > 0) {
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDmg << " pts of damage" << std::endl;
        _energyPts--;
    } else {
        std::cout << "FragTrap " << _name << " has no energy or hit pts left to attack" << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << "request a position high five" << std::endl;
}
