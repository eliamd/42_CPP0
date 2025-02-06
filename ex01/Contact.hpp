/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:17:09 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/06 11:19:49 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_numbrer;

public:
	// Constructor
	Contact() {}
	Contact(std::string first_name, std::string last_name, std::string nickname,
			std::string darkest_secret, std::string phone_numbrer);

	// Setters
	void set_first_name(std::string first_name);
	void set_last_name(std::string last_name);
	void set_nickname(std::string nickname);
	void set_darkest_secret(std::string darkest_secret);
	void set_phone_numbrer(std::string phone_numbrer);

	// Getters
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	std::string get_darkest_secret() const;
	std::string get_phone_numbrer() const;
};

#endif
