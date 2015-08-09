/* 
 * File:   Process.cpp
 * Author: manasbala
 * 
 * Created on August 9, 2015, 10:14 AM
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

