
#include <iostream>
#include <fstream>
#include "WzSerialportPlus.h"
#include <nlohmann/json.hpp>
using json = nlohmann::json;
using namespace std;
void PareJsonFromFile(std::string filePath)
{
	std::ifstream f;
	f.open(filePath, std::ifstream::in);
	if (!f.good())
		return;
	json data = json::parse(f);
}
void PareJsonFromString(std::string str)
{
	
}
void revalue(int m)
{

}
int main()
{


}
