/*
 * Element.h
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */
#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
class Element
{
	private:
		std::string _name;
		std::string _auth;
		std::string _editorial;
		std::string _date;
		std::string _category;
		Element* _next;

	public:
		Element(std::string name, std::string auth,std::string editorial, std::string date, std::string categoory);
        std::string getName(){return _name;}
        std::string getAuth(){return _auth;}
        std::string getEditorial(){return _editorial;}
        std::string getDate(){return _date;}
        std::string getCategory(){return _category;}

        inline void setNext(Element* _element ){_next = _element;}
	//This means that Stack can access directly to Element's private members
	friend class Stack;
};

#endif /* ELEMENT_H_ */
