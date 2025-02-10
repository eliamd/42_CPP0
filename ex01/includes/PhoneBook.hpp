/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:17:09 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/10 10:45:42 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MAX_CONTACTS 8

#include <iostream>
#include <string>
#include "Contact.hpp"

/* -------------------------------------------------------------------------- */
/*                               Class PhoneBook                              */
/* -------------------------------------------------------------------------- */

class PhoneBook {
private:
	Contact contacts[MAX_CONTACTS];
	int amount_of_contacts;

public:
	/* ------------------------------- Constructor ------------------------------ */
	PhoneBook();

	/* -------------------------------  Functions ------------------------------- */
	void display_contacts();
	void add_contact(Contact contact);
	void search_contact(int index);

	/* --------------------------------- Getters -------------------------------- */
	int get_amount_of_contacts();

	/* --------------------------------- Setters -------------------------------- */
	void set_amount_of_contacts(int amount_of_contacts);

};

#endif
