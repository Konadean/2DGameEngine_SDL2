#pragma once
#include <SDL.h>

class Collision
{
public:
	// Axis-Alligned Bounding Box
	static bool AABB(const SDL_Rect& recA, const SDL_Rect& recB);
};