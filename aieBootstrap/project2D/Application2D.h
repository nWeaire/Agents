#pragma once
#include "GridNode.h"
#include "Application.h"
#include "Renderer2D.h"
#include "Audio.h"
class Application2D : public aie::Application {
public:

	Application2D();
	virtual ~Application2D();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Texture*		m_shipTexture;
	aie::Font*			m_font;

	GridNode** m_ppGrid;

	float m_timer;
};