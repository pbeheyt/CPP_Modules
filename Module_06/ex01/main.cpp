/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:36:23 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/06/27 11:53:02 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data data;
    data.nb = 42;
    data.raw = "Hello, World!";

    Serializer serializer;

    uintptr_t serializedData = serializer.serialize(&data);
    Data *deserializedData = serializer.deserialize(serializedData);

    std::cout << "Deserialized Data:" << std::endl;
    std::cout << "nb: " << deserializedData->nb << std::endl;
    std::cout << "raw: " << deserializedData->raw << std::endl;

    return 0;
}
