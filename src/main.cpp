#include <iostream>
#include "Structogram.h"
#include "VariableMap.h"


int main(int argc, const char *argv[])
{
	VariableMap vm;
	vm.setValue("i", Integer, "0");
	vm.setValue("mein_penis", String, "ist seeehr gut");
	vm.setValue("result", Float, "0.1245");
	vm.setValue("wahr_oder_nicht", Boolean, "False");

	debug(vm);

	std::cout << vm.exists("cartman") << std::endl;
	std::cout << vm.getVariable("mein_penis").second << std::endl;



	std::cout << "==========================" << std::endl;
	Structogram s;

	s.appendSequenz("int i = 0;");

	debug(s);

	return 0;
}
