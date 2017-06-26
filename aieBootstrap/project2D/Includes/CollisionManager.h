#pragma once

class CollisionManager
{

public:
	static 	CollisionManager* GetInstance();
	static void Create();
	static void Destroy();

	void Print();

private:
	CollisionManager();
	~CollisionManager();

	static CollisionManager* m_instance;

};

