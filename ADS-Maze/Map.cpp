#include "Map.h"

Map::Map()
{
	m_length = 30; // Vertical
	m_width = 20; // Horizontal
	m_index = m_length * m_width;

}

void Map::draw()
{
	for (int i = 1; i < m_width + 1; i++)
	{
		for (int j = 1; j < m_length + 1; ++j)
		{
			if (i == 1 || j == 1 || i == m_width || j == m_length) // Border line = 1
			{
				cout << " 1";
			}
			else
			{
				cout << "  ";
			}

		}
		cout << endl;
	}
}

