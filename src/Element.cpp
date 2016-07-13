/*
 * Element.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Element.h"

Element::Element(std::string name, std::string auth ,std::string editorial,std::string fecha,std::string categoria ):_name(name), _auth(auth),_date(fecha),_category(categoria), _editorial(editorial),_next(NULL)
{
}
