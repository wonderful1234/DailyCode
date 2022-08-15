
#include <iostream>
#include <rapidjson/document.h>
#include <rapidjson/istreamwrapper.h>
#include <fstream>
using namespace rapidjson;
using namespace std;
int main()
{
	ifstream ifs("test.json");
	IStreamWrapper isw(ifs);
	Document d;
	d.ParseStream(isw);
}
