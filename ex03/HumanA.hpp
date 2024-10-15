/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:23:39 by cyferrei          #+#    #+#             */
/*   Updated: 2024/10/15 13:45:53 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon &_weapon;

	public:
		HumanA();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack(void);
};

#endif