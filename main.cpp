#include <string>
#include <json/json.h>
#include <iostream>
#include <fstream>
using namespace std;
 
void readFileJson(); //从文件中读取JSON，一个存储了JSON格式字符串的文件
 
int main(int argc, char *argv[]) 
{
	readFileJson();
	
	return 0;
}
 
//从文件中读取JSON
void readFileJson()
{
	Json::Reader reader;
	Json::Value root;
 
	//从文件中读取，保证当前文件有test.json文件
	ifstream in("../test.json", ios::binary);
	//in.open("test.json", ios::binary);
 
	if( !in.is_open() )  
	{ 
		cout << "Error opening file\n"; 
		return; 
	}
 
	if(reader.parse(in,root))
	{
		//读取根节点信息
		string name = root["name"].asString();
		
		//读取子节点信息
		string partner_name = root["partner"]["partner_name"].asString();
		int partner_age = root["partner"]["partner_age"].asInt();
		bool partner_sex_is_male = root["partner"]["partner_sex_is_male"].asBool();
	
		cout << "My partner's name is " << partner_name << endl;
		cout << (partner_sex_is_male ? "he" : "she") << " is "
			<< partner_age << " years old" << endl;
	
		//读取数组信息
		cout << "Here's my achievements:" << endl;
		for(unsigned int i = 0; i < root["achievement"].size(); i++)
		{
			string ach = root["achievement"][i].asString();
			cout << ach << '\t';
		}
		cout << endl;
	
		cout << "Reading Complete!" << endl;
	} else {
		cout << "parse error\n" << endl;	
	}
 
	in.close();
}