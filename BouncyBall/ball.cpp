#include "ball.hpp"
#include <tuple> 
using namespace std;  

Ball::Ball(float posX, float posY) 
{  

	this -> position.x = posX;
	this -> position.y = posY;
	
};

void Ball::Update() 
{
	this -> position.x += 20;
	this -> position.y += 0;
}

float* Ball::getPosition() 
{
	float position[2] = {this->position.x, this->position.y};

	return position;
}
