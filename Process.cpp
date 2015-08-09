/* 
 * File:   main.cpp
 * Author: manasbala
 * Email: manas.du@gmail.com
 * Github: https://github.com/manasbala
 *
 * Created on August 9, 2015, 10:10 AM
 */

#include "Process.h"

Process::Process() {
}

Process::Process(int id, int bt, int btl)
{
	this->processId = id;
	this->brustTime = bt;
	this->brustTimeBalance = btl;
}

