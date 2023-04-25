/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 05:41:30 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/25 06:24:12 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    // // Calcul de l'aire totale du triangle ABC
    // Fixed totalArea = ((b.getX() - a.getX()) * (c.getY() - a.getY())) -
    //                   ((c.getX() - a.getX()) * (b.getY() - a.getY()));

    // // Calcul de l'aire du triangle PAB
    // Fixed area1 = ((point.getX() - a.getX()) * (b.getY() - a.getY())) -
    //               ((b.getX() - a.getX()) * (point.getY() - a.getY()));

    // // Calcul de l'aire du triangle PBC
    // Fixed area2 = ((point.getX() - b.getX()) * (c.getY() - b.getY())) -
    //               ((c.getX() - b.getX()) * (point.getY() - b.getY()));

    // // Calcul de l'aire du triangle PCA
    // Fixed area3 = ((point.getX() - c.getX()) * (a.getY() - c.getY())) -
    //               ((a.getX() - c.getX()) * (point.getY() - c.getY()));

    // // Si l'aire totale du triangle ABC est nulle, on ne peut pas calculer les ratios
    // if (totalArea == 0) {
    //     return false;
    // }

    // // Calcul des ratios
    // Fixed ratio1 = area1 / totalArea;
    // Fixed ratio2 = area2 / totalArea;
    // Fixed ratio3 = area3 / totalArea;

    // // Si les ratios sont tous positifs et leur somme est égale à 1, le point est à l'intérieur du triangle
    // if (ratio1 >= 0 && ratio2 >= 0 && ratio3 >= 0 && ratio1 + ratio2 + ratio3 == Fixed(1)) {
    //     return true;
    // } else {
    //     return false;
    // }
}
