/*
 * Menu.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */


#include <stdlib.h>
#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu()
{

}

void Menu::clearScreen()
{
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
}

void Menu::pause()
{
	#ifdef _WIN32
	system("pause");
	#else
	system("read -n1 -r -p \"Press any key to continue...\" key");
	#endif
}


bool Menu::validate(int option)
{
	if(option >= 1 && option <= 5)
	{
		return true;
	}else
	{
		cout << "Please pick an option between 1 and 4"<< endl;
		pause();
		return false;
	}
}

void Menu::routeAction(int option)
{
	switch(option)
	{
	case 1:
		listBooks();
		break;
	case 2:
		addBook();
		break;
	case 3:
		getLast();
		break;
	case 4:
        getByCategory();
		break;
    case 5:
		cout << "Thanks for using our software, good bye!" << endl;
	}

	pause();
}

	Stack* _stack = new Stack();

void Menu::listBooks()
{
       Element* i = _stack->pop();
    while(i != NULL)
    {
          cout << i->getName() << "\t" << i->getAuth() << "\t" << i->getCategory() << "\t" << i->getDate() << "\t" << i->getEditorial() << endl;
        i = _stack->pop();
    }
}

void Menu::addBook()
{

    std::string name,auth, editorial,date,category;
    cout << "Please write the name of the book" << endl;
    cin >> name;

    cout << "write the auth of the book" <<endl;
    cin >> auth;

    cout << "write the editorial of the book" <<endl;
    cin >>  editorial;

    cout << "write the publication date" <<endl;
    cin >>  date;

    cout << "write the category" <<endl;
    cin >>  category;

    Element* book = new Element(name, auth,editorial,date,category);

    _stack->push(book);

}
void Menu::getLast()
{

}

void Menu::getByCategory()
{
    cout << "per category" << endl;
}


void Menu::show()
{
	int option;
	do
	{
		clearScreen();
		cout << "ITLA Shopping List" << endl;
		cout << "1- List books" << endl;
		cout << "2- Add book" << endl;
		cout << "3- Get the last" << endl;
		cout << "4- Look book by category" << endl;
		cout << "5- Exit" << endl;
		cout << "Select an option => ";
		cin >> option;
		if(validate(option))
		{
			routeAction(option);
		}
	}while(option !=5);
}
