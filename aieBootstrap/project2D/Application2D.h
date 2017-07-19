#pragma once
#include "GridNode.h"
#include "Application.h"
#include "Renderer2D.h"
#include "Audio.h"
#include "Grid.h"
struct GridNode;


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

	Grid* m_pGrid;

	float m_timer;

	

};