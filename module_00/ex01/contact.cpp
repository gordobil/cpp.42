/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:57:12 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/19 17:57:12 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

std::string	Contact::get_first_name(){
	return (first_name); }

std::string	Contact::get_last_name(){
	return (last_name); }

std::string	Contact::get_nickname(){
	return (nickname); }

std::string	Contact::get_phone_number(){
	return (phone_number); }

std::string	Contact::get_darkest_secret(){
	return (darkest_secret); }

void	Contact::update_contacts(std::string *data)
{
	first_name = data[0];
	last_name = data[1];
	nickname = data[2];
	phone_number = data[3];
	darkest_secret = data[4];
}