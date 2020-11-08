//#define OLC_PGE_APPLICATION
//#include "olcPixelGameEngine.h"
//
//class Drawing : public olc::PixelGameEngine
//{
//public:
//	Drawing()
//	{
//		sAppName = "Drawing Example";//Window name.
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
//			//Clear(olc::BLACK);//Clear's the past screens.
//			FillCircle(xloc, yloc, rad, olc::Pixel(rand() % 255, rand() % 255, rand() % 255));
//			ProcessInput();
//
//			timecounter -= delay;
//			// Resets timer
//		}
//
//		return true;
//	}
//
//	void ProcessInput() {
//		//Down key pressed or held, move down.
//		if ((GetKey(olc::Key::DOWN).bPressed || GetKey(olc::Key::DOWN).bHeld) && ((yloc + rad + 1) < ScreenHeight())) {
//			yloc++;
//		}
//
//		//Up key pressed or held, move up.
//		if ((GetKey(olc::Key::UP).bPressed || GetKey(olc::Key::UP).bHeld) && ((yloc - rad) > 0)) {
//			yloc--;
//		}
//
//		//Left key pressed or held, move left.
//		if ((GetKey(olc::Key::LEFT).bPressed || GetKey(olc::Key::LEFT).bHeld) && ((xloc - rad) > 0)) {
//			xloc--;
//		}
//
//		//Right key pressed or held, move right.
//		if ((GetKey(olc::Key::RIGHT).bPressed || GetKey(olc::Key::RIGHT).bHeld) && ((xloc + rad + 1) < ScreenWidth())) {
//			xloc++;
//		}
//
//		//C key pressed or held clears the screen.
//		if (GetKey(olc::Key::C).bPressed || GetKey(olc::Key::C).bHeld)
//		{
//			Clear(olc::BLACK);
//		}
//
//		//Left mouse button pressed or held, position equals mouse.
//		if (GetMouse(0).bPressed || GetMouse(0).bHeld) {
//			xloc = (int)GetMouseX();
//			yloc = (int)GetMouseY();
//
//		}
//	}
//
//private:
//	int xloc = ScreenWidth() / 2;
//	int yloc = ScreenHeight() / 2;
//	int rad = 2;
//	//Radius
//	float timecounter = 0;
//	// timer
//	float delay = 2.0 / 240.0f;
//	// Length of delay
//};
//
//int main()
//{
//	Drawing app;
//	//Game object
//	if (app.Construct(256, 240, 4, 4))
//		app.Start();
//	//Window constructed and started.
//
//	return 0;
//}
