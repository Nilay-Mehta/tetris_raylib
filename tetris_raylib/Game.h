#pragma once
#include <string>
#include "Board.h"
#include "Tetromino.h"
class Game
{
public:
	Game(int width, int height, int fps, std::string title);
	
	Game(const Game& other) = delete;
	Game& operator = (const Game& other) = delete;
	
	~Game() noexcept;
	
	bool GameShouldClose() const;
	void Tick();

private:
	void Draw();
	void Update();
	
	Board board;
	Jay tetromino;
};