#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class Ball {//Handles ball functionality

public:

	Ball() {//Default Constructor 
	}

	Ball(olc::PixelGameEngine* p) {//Pointer seeded
		pge = p;//points to the engine.

		xloc = rand() % (pge->ScreenWidth()) - rad * 2;
		yloc = rand() % (pge->ScreenHeight()) - rad * 2;
	}

	void setValues(olc::PixelGameEngine* p) {//Sets nessesary values
		pge = p;//points to the engine.

		xloc = (rand() % (pge->ScreenWidth()) - rad * 2);
		yloc = (rand() % (pge->ScreenHeight()) - rad * 2);
	}

	void Circle() {
		pge->FillCircle(xloc, yloc, rad, olc::Pixel(red, green, blue));
	}

	void Velocity() {
		yloc = yloc + (yVal * ydirection);
		xloc = xloc + (xVal * xdirection);

		if (xloc > ((pge->ScreenWidth()) - rad) || xloc < rad) {
			xdirection *= -1;
			red = (rand() % 255);
			green = (rand() % 255);
			blue = (rand() % 255);
		}
		if (yloc > ((pge->ScreenHeight()) - rad) || yloc < rad) {
			ydirection *= -1;
			red = (rand() % 255);
			green = (rand() % 255);
			blue = (rand() % 255);
		}

		if (pge->GetMouse(0).bPressed || pge->GetMouse(0).bHeld) {
			xloc = (int)pge->GetMouseX();
			yloc = (int)pge->GetMouseY();

		}

	}

	olc::PixelGameEngine* pge;//points to the engine.

	int red = (rand() % 255);
	int green = (rand() % 255);
	int blue = (rand() % 255);

	float xloc;
	float yloc;
	int xdirection = 1;
	int ydirection = 1;
	float xVal = 0.5;
	float yVal = 1;
	float rad = 5;
	//Radius
};

class BouncingBall : public olc::PixelGameEngine
{

public:
	BouncingBall()
	{
		sAppName = "Bouncing Ball Example";//Window name.
	}

	bool OnUserCreate() override
	{
		// Called once at the start, so create things here

		//b = new Ball(this);

		b = new Ball[amount];//Array of balls.

		for (size_t i = 0; i < amount; i++)
		{
			b[i].setValues(this);//Sets values for each
		}

		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		// called once per frame

		timecounter += fElapsedTime;
		// Adds time passed.

		if (timecounter >= delay)
		{
			Clear(olc::BLACK);//Clear's the past screens.

			//b->Circle();
			//b->Velocity();

			for (size_t i = 0; i < amount; i++)//Calls functions for each one.
			{
				b[i].Circle();
				b[i].Velocity();
			}

			timecounter -= delay;
			// Resets timer
		}

		return true;
	}

private:
	Ball* b;
	int amount = 1;

	float timecounter = 0;
	// timer
	float delay = 2 / 240.0f;
	// Length of delay
};

int main()
{
	BouncingBall app;
	//Game object
	if (app.Construct(256, 240, 4, 4))
		app.Start();
	//Window constructed and started.

	return 0;
}
