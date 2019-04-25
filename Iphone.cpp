#include "Iphone.h"

Iphone::Iphone( const string &verSO )
:verionSO( verSO )
{
    cout << "A versao do SO eh: " << verionSO << '\n';
 
}

Iphone::~Iphone()
{
}


void Iphone::info( )
{
    cout << "A versao do SO eh: " << verionSO << '\n';
}