/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:07:47 by htrindad          #+#    #+#             */
/*   Updated: 2025/08/27 17:07:55 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		Contact();
		~Contact();
		void SetFirstName(std::string fn);
		void SetLastName(std::string ln);
		void SetNickname(std::string nick);
		void SetPhoneNumber(std::string pn);
		void SetDarkestSecret(std::string ds);
		const std::string GetFirstName();
		const std::string GetLastName();
		const std::string GetNickname();
		const std::string GetPhoneNumber();
		const std::string GetDarkestSecret();
};

