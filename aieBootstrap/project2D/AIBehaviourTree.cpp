#include "AIBehaviourTree.h"
#include "Selector.h"
#include "Sequence.h"
#include "BehaviourNode.h"
#include "ExampleAction.h"
#include "ExampleQuestion.h"

AIBehaviourTree::AIBehaviourTree()
{
	m_pRoot = new Sequence();
	BehaviourNode* pFirst = new ExampleQuestion();
	BehaviourNode* pSecond = new ExampleAction("Button Pressed");


	((Composite*)m_pRoot)->children.pushBack(pFirst);
	((Composite*)m_pRoot)->children.pushBack(pSecond);
}


AIBehaviourTree::~AIBehaviourTree()
{
	delete m_pRoot;
	


}

void AIBehaviourTree::Update(float fDeltaTime)
{
	m_pRoot->Execute();
}
