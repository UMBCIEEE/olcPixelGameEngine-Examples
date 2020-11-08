//#define OLC_PGE_APPLICATION
//#include "olcPixelGameEngine.h"
//
//class BouncingBall : public olc::PixelGameEngine
//{
//public:
//	BouncingBall()
//	{
//		sAppName = "Bouncing Ball Example";//Window name.
//	}
//
//	bool OnUserCreate() override
//	{
//		// Called once at the start, so create things here
//
//
//
//		return true;
//	}
//
//	bool OnUserUpdate(float fElapsedTime) override
//	{
//		// called once per frame
//
//		timecounter += fElapsedTime;
//		// Adds time passed.
//
//		if (timecounter >= delay)
//		{
//			Clear(olc::BLACK);//Clear's the past screens.
//			FillCircle(xloc, yloc, rad, olc::Pixel(red, green, blue));
//
//			Velocity();
//
//			timecounter -= delay;
//			// Resets timer
//		}
//
//		return true;
//	}
//
//	void Velocity() {
//		yloc = yloc + (yVal * ydirection);
//		xloc = xloc + (xVal * xdirection);//Keeps adding or subtracting from position.
//
//		if (xloc > ScreenWidth() - rad || xloc < rad) {//Width edge bouncing.
//			xdirection *= -1;
//			red = (rand() % 255);
//			green = (rand() % 255);
//			blue = (rand() % 255);
//		}
//		if (yloc > ScreenHeight() - rad || yloc < rad) {//Height edge bouncing
//			ydirection *= -1;
//			red = (rand() % 255);
//			green = (rand() % 255);
//			blue = (rand() % 255);
//		}
//
//		if (GetMouse(0).bPressed || GetMouse(0).bHeld) {//Mouse input
//			xloc = (int)GetMouseX();
//			yloc = (int)GetMouseY();
//
//		}
//
//		std::cout << "yLoc: " << yloc << " xloc: " << xloc << std::endl;
//	}
//
//private:
//	int red = (rand() % 255);
//	int green = (rand() % 255);
//	int blue = (rand() % 255);
//	
//	float xloc = ScreenWidth() / 2;
//	float yloc = ScreenHeight() / 2;
//	int xdirection = 1;
//	int ydirection = 1;
//	float xVal = 0.5;
//	float yVal = 1;
//	float rad = 5;
//	//Radius
//	float timecounter = 0;
//	// timer
//	float delay = 1.0 / 240.0f;
//	// Length of delay
//};
//
//int main()
//{
//	BouncingBall app;
//	//Game object
//	if (app.Construct(256, 240, 4, 4))
//		app.Start();
//	//Window constructed and started.
//
//	return 0;
//}
