#include "CollisionManager.h"
#include <iostream>
CollisionManager* CollisionManager::m_instance = nullptr;


CollisionManager::CollisionManager()
{
}

CollisionManager::~CollisionManager()
{
}

CollisionManager* CollisionManager::GetInstance()
{
	return m_instance;
}

void CollisionManager::Create()
{
	if(!m_instance)
		m_instance = new CollisionManager();
}

void CollisionManager::Destroy()
{
	delete m_instance;
}

void CollisionManager::Print()
{
	std::cout << "It Works!" << std::endl;
}