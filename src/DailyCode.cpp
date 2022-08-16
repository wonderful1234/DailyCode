
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;
using namespace std;
int main()
{
	std::ifstream f("example.json");
	//json data = json::parse(f);
}
