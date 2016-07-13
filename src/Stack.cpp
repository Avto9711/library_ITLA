/*
 * Stack.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Stack.h"
#include <iostream>
#include <cstdlib>

void Stack::push(Element* _element)
{
	if(_last == NULL)
    {
        _last= _element;
        _next= _element;
	}
	else
    {
    _element -> _next = _last;
    _last = _element;

    }
}

Element* Stack::pop()
{
	if(_last == NULL)
    {
        return NULL;
    }

    Element* retorno = _last;
    _last = retorno -> _next;
    return retorno;
}

Stack::Stack(): _last(NULL),_next(NULL)
{

}

