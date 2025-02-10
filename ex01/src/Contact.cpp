/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:02:20 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/10 10:46:37 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

/* ------------------------------- Constructor ------------------------------ */

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, std::string phone_number)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->darkest_secret = darkest_secret;
	this->phone_number = phone_number;
}

/* --------------------------------- Setters -------------------------------- */

void Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

void Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

/* --------------------------------- Getters -------------------------------- */

std::string Contact::get_first_name() const
{
	return (this->first_name);
}

std::string Contact::get_last_name() const
{
	return (this->last_name);
}

std::string Contact::get_nickname() const
{
	return (this->nickname);
}

std::string Contact::get_darkest_secret() const
{
	return (this->darkest_secret);
}

std::string Contact::get_phone_number() const
{
	return (this->phone_number);
}
