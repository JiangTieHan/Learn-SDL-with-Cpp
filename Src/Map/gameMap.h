#pragma once
#include "layer.h"
#include <vector>
class GameMap
{
public:
	void Render()
	{
		for (unsigned int i = 0; i < m_MapLayers.size(); i++)
		{
			m_MapLayers[i]->Render();
		}
	}

	void Update()
	{
		for (unsigned int i = 0; i < m_MapLayers.size(); i++)
		{
			m_MapLayers[i]->Update();
		}
	}

	inline std::vector<Layer*>& GetMapLayers() { return m_MapLayers; }

	GameMap() 
	{
		
	};

private:
	std::vector<Layer*> m_MapLayers;
};
