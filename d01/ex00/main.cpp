/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 23:56:12 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/22 23:56:15 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include "Colors.hpp"

int 		main(void)
{
	Pony *ponyH = new Pony();
	Pony ponyS = Pony();
	Pony *ponyH2 = new Pony("Leo2", "Blue", 1);
	Pony ponyS2 = Pony("Annie2", "Yellow", 1);


	ponyH->setName("Leo");
	ponyS.setName("Annie");
	ponyH2->setAge(20);
	ponyS2.setAge(15);

	Pony *ponyH3 = ponyOnTheHeap();
	Pony ponyS4 = ponyOnTheStack();
	delete(ponyH);
	delete(ponyH2);
	delete(ponyH3);
	return (0);
}
