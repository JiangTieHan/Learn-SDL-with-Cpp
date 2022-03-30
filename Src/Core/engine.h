#pragma once
#include <SDL.h>
#include <SDL_image.h>

#define SCREEN_WIDTH 960
#define SCREEN_HIGHT 640

class Engine {

public:

	static Engine* GetInstance()
	{
		return s_Instance = (s_Instance != nullptr) ? s_Instance : new Engine();
	}

	bool Init();
	bool Clean();
	void Quit();

	void Update();
	void Render();
	void Events();

	inline bool IsRunning() const { return m_IsRunning; };
	inline SDL_Renderer* GetRenderer() const { return m_Renderer; }

private:

	Engine() {};
	bool m_IsRunning;

	SDL_Window* m_Window;
	SDL_Renderer* m_Renderer;
	static Engine* s_Instance;
};