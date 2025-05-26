/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramos-a <jramos-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:39:35 by jramos-a          #+#    #+#             */
/*   Updated: 2025/05/20 21:39:35 by jramos-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	// std::cout << "Contact constructor called" << std::endl;
}

// Setters for Contact class

void Contact::set_index(int index)
{
	this->_index = index;
}

void Contact::set_firstname(std::string firstname)
{
	this->_firstname = firstname;
}

void Contact::set_lastname(std::string lastname)
{
	this->_lastname = lastname;
}

void Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void Contact::set_darkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}



// Getters for Contact class

int Contact::get_index(void) const
{
	return this->_index;
}

std::string Contact::get_firstname(void) const
{
	return this->_firstname;
}

std::string Contact::get_lastname(void) const
{
	return this->_lastname;
}

std::string Contact::get_nickname(void) const
{
	return this->_nickname;
}

std::string Contact::get_phoneNumber(void) const
{
	return this->_phoneNumber;
}

std::string Contact::get_darkestSecret(void) const
{
	return this->_darkestSecret;
}

// int main()
// {
// 	Contact contact;

// 	contact.set_firstname("John");
// 	contact.set_lastname("Doe");
// 	contact.set_nickname("Johnny");
// 	contact.set_phoneNumber("asd");
// 	contact.set_darkestSecret("Loves pineapple on pizza");
// 	std::cout << "First Name: " << contact.get_firstname() << std::endl;
// 	std::cout << "Last Name: " << contact.get_lastname() << std::endl;
// 	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
// 	std::cout << "Phone Number: " << contact.get_phoneNumber() << std::endl;
// 	std::cout << "Darkest Secret: " << contact.get_darkestSecret() << std::endl;
// 	return 0;
// }

Contact::~Contact(void)
{
	// std::cout << "Contact destructor called" << std::endl;
}