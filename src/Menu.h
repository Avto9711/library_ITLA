/*
 * Menu.h
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#ifndef MENU_H_
#define MENU_H_
#include "Stack.h"

class Menu
{
	private:
		void clearScreen();
		void listBooks();
		void addBook();
		void getLast();
		void getByCategory();
		bool validate(int option);
		void routeAction(int option);
		void pause();

	public:
		void show();
		Menu();
};

#endif /* MENU_H_ */