#pragma once

class BehaviourNode;

class AIBehaviourTree
{
public:
	AIBehaviourTree();
	~AIBehaviourTree();

	void Update(float fDeltaTime);

private:
	BehaviourNode* m_pRoot;

};

