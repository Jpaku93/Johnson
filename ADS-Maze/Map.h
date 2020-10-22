#pragma once
#include <iostream>
#include<vector> 
using namespace std;
class Map
{
private:
	int m_length; //Horizontal
	int m_width; // Vertical
	vector<string> a_map;
	int m_index;
public:


	Map();
	~Map() {};
	void draw();
};

