/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:28:26 by agrimald          #+#    #+#             */
/*   Updated: 2024/10/17 16:28:27 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Server.hpp"
# include "Channel.hpp"
# include "Client.hpp"
# include "Message.hpp"

std::string convertToCRLF(const std::string& input);