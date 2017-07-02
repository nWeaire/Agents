#pragma once
class State
{
public:
	State();
	~State();

	virtual void OnEnter() = 0;
	virtual void OnUpdate(float fDeltaTime) = 0;
	//virtual void OnDraw(Renderer2D* m_2dRenderer) = 0;
	virtual void OnExit() = 0;

};

