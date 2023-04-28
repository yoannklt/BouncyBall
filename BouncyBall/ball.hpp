#ifndef BALL
#define BALL

struct Position {
	float x;
	float y;
}; 

class Ball {

private:
	// Membres privés
	Position position;

public:
	// Membres publics

	Ball(float posX, float posY);
	void Update();
	float* getPosition();

};

#endif