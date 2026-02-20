#include <iostream>
#include <sstream>

#include "address.h"

Address::Address(){
	street = "Street";
	city = "City";
	state = "State";
	zip = "Zip";
} //end constructor

void Address::init(std::string sStreet, std::string sCity, std::string sState, std::string sZip){
	//std::stringstream ss (addressString);
	
	street = sStreet;
	city = sCity;
	state = sState;
	zip = sZip;
	
	//getline(ss, street, ',');
	//getline(ss, city, ',');
	//getline(ss, state, ',');
	//getline(ss, zip);
} //end init

void Address::printAddress(){
	std::cout << street  << std::endl;
	std::cout << city << " " << state << ", " << zip << std::endl;
} //end printAddress
