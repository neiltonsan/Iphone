#include <iostream>
using std::cout;

#include "Iphone.h"

int main(int argc, char **argv)
{
    Iphone myPhone("v123");
    Iphone phone1("chant");
    
    myPhone.info( );
    
	cout << "hello world\n";
	return 0;
}
