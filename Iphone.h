#ifndef IPHONE_H
#define IPHONE_H

#include <string>
using std::string;

#include <iostream>
using std::cout;

class Iphone
{
public:

    Iphone( const string & = "" ); 
    
    ~Iphone();
    
    void info( );    
    void connet( );
    
    
    
private:
    
    string verionSO;
    int tamMem;
    bool isConnect;
    

};

#endif // IPHONE_H
