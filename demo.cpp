#include "fssimplewindow.h"
#include "yssimplesound.h"
#include <stdio.h>
#include <math.h>

const double YsPi = 3.1415927;
class Doll
{
public:
	void leftDrawbody(int x, int y, int r, int g, int b);
	void leftface(int x, int y, double r ,int colorr, int colorg, int colorb);
	void leftfaceframefont(int x, int y);
	void leftfaceframeback(int x, int y);
	void leftfaceframebody(int x, int y);

};

void Doll::leftDrawbody(int x, int y, int r, int g, int b)
{
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(r, g, b);
	for (int i = 0; i<360; i += 1)
	{

		double r = 70;
		double a = (double)i*YsPi / 180.0;
		double dx = sin(a);
		double dy = cos(a);
		glVertex2d((double)x + dx*r, (double)y + dy*r);
		glVertex2d((double)x - 90  + dx*r, (double)y + dy*r);
	}
	glEnd();
}
void Doll::leftface(int x, int y, double r, int colorr, int colorg, int colorb)
{
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(colorr, colorg, colorb);
	for (int i = 0; i<360; i += 1)
	{

		
		double a = (double)i*YsPi / 180.0;
		double dx = sin(a);
		double dy = cos(a);
		glVertex2d((double)x-2.5 + dx*r, (double)y + dy*r);
		
	}
	glEnd();
}
void Doll::leftfaceframefont(int x, int y)
{
	glEnable(GL_LINE_WIDTH);
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	for (int i = 0; i<360; i += 1)
	{

		double r = 70;
		double a = (double)i*YsPi / 180.0;
		double dx = sin(a);
		double dy = cos(a);
		glVertex2d((double)x + dx*r, (double)y + dy*r);
	}
	glEnd();
}

void Doll::leftfaceframeback(int x, int y)
{
	glEnable(GL_LINE_WIDTH);
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	for (int i = 0; i<360; i += 1)
	{
		double r = 70;
		double a = (double)i*YsPi / 180.0;
		double dx = sin(a);
		double dy = cos(a);
		glVertex2d((double)x + dx*r, (double)y + dy*r);
	}
	glEnd();
}
void Doll::leftfaceframebody(int x, int y)
{
	glEnable(GL_LINE_WIDTH);
	glLineWidth(3.0);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2d(x, y);
	glVertex2d(x + 90, y);
	glEnd();
}


void DrawTarget(int tx, int ty, int tw, int th, int i, int g, int b)
{
	glColor3ub(i, g, b);

	glBegin(GL_QUADS);
	glVertex2i(tx, ty);
	glVertex2i(tx + tw, ty);
	glVertex2i(tx + tw, ty + th);
	glVertex2i(tx, ty + th);
	glEnd();
}

void Drawdrum(void)
{
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 0);
	for (int i = 0; i<360; i += 1)
	{
		int x = 70;
		int y = 85;
		double r = 70;
		double a = (double)i*YsPi / 180.0;
		double dx = sin(a);
		double dy = cos(a);
		glVertex2d((double)x + dx*r, (double)y + dy*r);
	}
	glEnd();
}
void Drawdrumdody(void)
{
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 0, 0);
	for (int i = 0; i<360; i += 1)
	{
		int x = 70;
		int y = 115;
		double r = 70;
		double a = (double)i*YsPi / 180.0;
		double dx = sin(a);
		double dy = cos(a);
		glVertex2d((double)x + dx*r, (double)y + dy*r);
	}
	glEnd();
}

void Drawdrumblack(void)
{
	glEnable(GL_LINE_WIDTH);
	glLineWidth(1.2);
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	for (int i = 0; i<360; i += 1)
	{
		int x = 70;
		int y = 85;
		double r = 71;
		double a = (double)i*YsPi / 180.0;
		double dx = sin(a);
		double dy = cos(a);
		glVertex2d((double)x + dx*r, (double)y + dy*r);
	}
	glEnd();
}

void Drawinner(void)
{
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 230, 0);
	for (int i = 0; i<360; i += 1)
	{
		int x = 70;
		int y = 85;
		double r = 50;
		double a = (double)i*YsPi / 180.0;
		double dx = sin(a);
		double dy = cos(a);
		glVertex2d((double)x + dx*r, (double)y + dy*r);
	}
	glEnd();
}

void Drawcombopath(void)
{
	glBegin(GL_QUADS);
	glColor3ub(200, 230, 200);
	glVertex2i(20, 40);
	glVertex2i(800, 40);
	glVertex2i(800, 140);
	glVertex2i(20, 140);

	glEnd();
}

void Drawfloor(void)
{
	glBegin(GL_QUADS);
	glColor3ub(255, 230, 0);
	glVertex2i(0, 470);
	glVertex2i(800, 470);
	glVertex2i(800, 600);
	glVertex2i(0, 600);

	glEnd();
}

void Redguy(void)
{
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 0, 0);
	for (int i = 0; i<360; i += 1)
	{
		int x = 550;
		int y = 85;
		double r = 50;
		double a = (double)i*YsPi / 180.0;
		double dx = sin(a);
		double dy = cos(a);
		glVertex2d((double)x + dx*r, (double)y + dy*r);
	}
	glEnd();
}


class Target
{
public:
	int x, y, w, h, v, state;
	

	void Initialize1(void);
	void Initialize2(void);
	void Initialize3(void);
	void Initialize4(void);
	void Initialize5(void);
	void Initialize6(void);
	void Initialize7(void);
	void Initialize8(void);
	void Initialize9(void);
	void Initialize10(void);
	void Initialize11(void);
	void Initialize12(void);
	void Initialize13(void);
	void Initialize14(void);
	void Initialize15(void);

};

void Target::Initialize1(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 17;
	state = 1;
}

void Target::Initialize2(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 25;
	state = 0;
}

void Target::Initialize3(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 25;
	state = 0;
}

void Target::Initialize4(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 17;
	state = 0;
}

void Target::Initialize5(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 26;
	state = 0;
}
void Target::Initialize6(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 17;
	state = 0;
}

void Target::Initialize7(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 25;
	state = 0;
}
void Target::Initialize8(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 25;
	state = 0;
}
void Target::Initialize9(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 17;
	state = 0;
}
void Target::Initialize10(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 17;
	state = 0;
}
void Target::Initialize11(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 25;
	state = 0;
}
void Target::Initialize12(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 25;
	state = 0;
}
void Target::Initialize13(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 17;
	state = 0;
}
void Target::Initialize14(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 17;
	state = 0;
}

void Target::Initialize15(void)
{
	x = 0;
	y = 80;
	w = 100;
	h = 20;
	v = 25;
	state = 0;
}





int main(void)
{
	FsOpenWindow(0, 0, 800, 600, 1);
	YsSoundPlayer::SoundData wav;
	YsSoundPlayer player;
	Doll doll;

	char fName[256] = "music.wav";
	
	
	if (YSOK != wav.LoadWav(fName))
	{
		printf("Failed to read %s\n", fName);
		return 1;
	}


	player.Start();
	
	player.PlayOneShot(wav);

	
	Target target1, target2, target3, target4, target5, target6, target7, target8, target9, target10, target11, target12, target13, target14, target15;

	target1.Initialize1();
	target2.Initialize2();
	target3.Initialize3();
	target4.Initialize4();
	target5.Initialize5();
	target6.Initialize6();
	target7.Initialize7();
	target8.Initialize8();
	target9.Initialize9();
	target10.Initialize10();
	target11.Initialize11();
	target12.Initialize12();
	target13.Initialize13();
	target14.Initialize12();
	target15.Initialize13();

	int count1 = 0;
	int count2 = 0;
	int count1_2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count3_4 = 0;
	int count5 = 0;
	int count6_7 = 0;
	int count8_9 = 0;
	int count10_11 = 0;
	int count12_13 = 0;
	int count14_15 = 0;


	FsPassedTime();
	for (;;)
	{
		
		int passed = FsPassedTime();
		printf("%d\n", passed);
		
		int wait = 20 - passed;
		if (0<wait)
		{
			FsSleep(wait);
		}
		
		FsPollDevice();

		auto key = FsInkey();
		if (FSKEY_ESC == key)
		{
			break;
		}
		//Acombo******************************************************
		if (0 != target1.state)
		{
			target1.x += target1.v;

			if (800 <= target1.x)
			{
				target1.x = 0;
			}

		}

		if (0 != target2.state)
		{

			target2.x += target2.v;

			if (800 <= target2.x)
			{
				target2.x = 0;
			}

		}

		//Bcombo******************************************************
		if (0 != target3.state)
		{

			target3.x += target3.v;

			if (800 <= target3.x)
			{
				target3.x = 0;
			}
		}

		if (0 != target4.state)
		{

			target4.x += target4.v;

			if (800 <= target4.x)
			{
				target4.x = 0;
			}
		}
		//Ccombo******************************************************
		if (0 != target5.state)
		{

			target5.x += target5.v;

			if (800 <= target5.x)
			{
				target5.x = 0;
			}
		}

		//D & Ecombo 
		if (0 != target6.state)
		{
			target6.x += target6.v;

			if (800 <= target6.x)
			{
				target6.x = 0;
			}

		}

		if (0 != target7.state)
		{

			target7.x += target7.v;

			if (800 <= target7.x)
			{
				target7.x = 0;
			}

		}
		//F combo 
		if (0 != target8.state)
		{
			target8.x += target8.v;

			if (800 <= target8.x)
			{
				target8.x = 0;
			}

		}

		if (0 != target9.state)
		{

			target9.x += target9.v;

			if (800 <= target9.x)
			{
				target9.x = 0;
			}

		}
		//G combo 
		if (0 != target10.state)
		{
			target10.x += target10.v;

			if (800 <= target10.x)
			{
				target10.x = 0;
			}

		}

		if (0 != target11.state)
		{

			target11.x += target11.v;

			if (800 <= target11.x)
			{
				target11.x = 0;
			}

		}
		//H combo 
		if (0 != target12.state)
		{
			target12.x += target12.v;

			if (800 <= target12.x)
			{
				target12.x = 0;
			}

		}
		//midi 
		if (0 != target13.state)
		{

			target13.x += target13.v;

			if (800 <= target13.x)
			{
				target13.x = 0;
			}

		}
		//I combo 
		if (0 != target14.state)
		{
			target14.x += target14.v;

			if (800 <= target14.x)
			{
				target14.x = 0;
			}

		}

		if (0 != target15.state)
		{

			target15.x += target15.v;

			if (800 <= target15.x)
			{
				target15.x = 0;
			}

		}

		//ChECK to stop
		//printf("%d\n", target3.x);
		//A combo////////////////////////////////////////////////
		if (0 != target1.state && 784 <= target1.x)
		{
			++count1_2;

			if (2 == count1_2 || 7 == count1_2 || 12 == count1_2 || 17 == count1_2)
			{
				target1.x = 0;
				target1.state = 0;
				target2.state = 1;

			}
		}

		if (0 != target2.state && 775 <= target2.x)
		{
			++count1_2;
			if (4 == count1_2 || 9 == count1_2 || 14 == count1_2 || 19 == count1_2)
			{
				target2.x = 0;
				target2.state = 0;
				target1.state = 1;
			}
		}
		//A combiner////////////////////////////////////////////////
		if (20 == count1_2)  //REMEMBER TO CHANGE TO 20!!!!!!!!!!
		{
			target1.state = 0;
			target2.state = 0;
			target3.state = 1;
			count1_2 = 0;
		}
		//B combo////////////////////////////////////////////////
		if (0 != target3.state && 775 <= target3.x)
		{
			++count3_4;

			if (2 == count3_4 || 5 == count3_4 || 8 == count3_4 || 11 == count3_4 || 14 == count3_4 || 17 == count3_4 || 20 == count3_4)
			{
				target3.x = 0;
				target3.state = 0;
				target4.state = 1;
			}
		}

		if (0 != target4.state && 784 <= target4.x)
		{
			++count3_4;
			if (3 == count3_4 || 6 == count3_4 || 9 == count3_4 || 12 == count3_4 || 15 == count3_4 || 18 == count3_4 || 21 == count3_4)
			{
				target4.x = 0;
				target4.state = 0;
				target3.state = 1;
			}
		}
		//end B start C////////////////////////////////////////////////
		if (21 == count3_4)  //REMEMBER TO CHANGE TO 20!!!!!!!!!!
		{
			target3.state = 0;
			target4.state = 0;
			count3_4 = 0;
			target5.state = 1;

		}
		//end C start D////////////////////////////////////////////////
		if (0 != target5.state && 775 <= target5.x)
		{
			++count5;
			if (7 == count5)
			{
				target5.x = 0;
				target5.state = 0;
				target6.state = 1;
				count5 = 0;
			}
		}
		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		if (0 != target6.state && 784 <= target6.x)
		{
			++count6_7;

			if (3 == count6_7 || 8 == count6_7 || 13 == count6_7 || 18 == count6_7)
			{
				target6.x = 0;
				target6.state = 0;
				target7.state = 1;

			}
		}

		if (0 != target7.state && 775 <= target7.x)
		{
			++count6_7;
			if (5 == count6_7 || 10 == count6_7 || 15 == count6_7 || 20 == count6_7)
			{
				target7.x = 0;
				target7.state = 0;
				target6.state = 1;
			}
		}
		//end D E start F
		//printf("%d\n", count6_7);
		if (25 == count6_7)  //REMEMBER TO CHANGE TO 20!!!!!!!!!!
		{
			target6.state = 0;
			target7.state = 0;
			count6_7 = 0;
			target8.state = 1;

		}

		if (0 != target8.state && 775 <= target8.x)
		{
			++count8_9;
			
			if (2 == count8_9 || 5 == count8_9 || 8 == count8_9 || 11 == count8_9 || 14 == count8_9 || 17 == count8_9)
			{
				target8.x = 0;
				target8.state = 0;
				target9.state = 1;
			}
		}
		
		if (0 != target9.state && 784 <= target9.x)
		{
			++count8_9;

			if (3 == count8_9 || 6 == count8_9 || 9 == count8_9 || 12 == count8_9 || 15 == count8_9 || 18 == count8_9)
			{
				target9.x = 0;
				target9.state = 0;
				target8.state = 1;

			}
		}
		//end F start G
		
		if (18 == count8_9)  //REMEMBER TO CHANGE TO 20!!!!!!!!!!
		{
			
			target8.state = 0;
			target9.state = 0;
			count8_9 = 0;
			target10.state = 1;
		}
		//printf("target10.state is  %d \n", target10.state);
		if (0 != target10.state && 784 <= target10.x)
		{
			++count10_11;
			

			if (5 == count10_11 || 8 == count10_11 || 11 == count10_11)
			{
				target10.x = 0;
				target10.state = 0;
				target11.state = 1;

			}
		}
		if (0 != target11.state && 775 <= target11.x)
		{
			++count10_11;
			if (7 == count10_11 || 10 == count10_11 || 13 == count10_11)
			{
				target11.x = 0;
				target11.state = 0;
				target10.state = 1;
			}
		}
		
		//end G start H
		if (13 == count10_11)
		{
			target10.state = 0;
			target11.state = 0;
			count10_11 = 0;
			target12.state = 1;
		}
		if (0 != target12.state && 775 <= target12.x)
		{
			
			++count12_13;
			if (2 == count12_13 || 5 == count12_13 || 8 == count12_13 || 11 == count12_13 || 14 == count12_13 || 17 == count12_13 || 20 == count12_13)
			{
				target12.x = 0;
				target12.state = 0;
				target13.state = 1;
			}
		}
		//printf("target13.x is  %d \n", target13.x);
		if (0 != target13.state && 784 <= target13.x)
		{

			++count12_13;
			
			if (3 == count12_13 || 6 == count12_13 || 9 == count12_13 || 12 == count12_13 || 15 == count12_13 || 18 == count12_13 || 32 == count12_13)
			{
				target13.x = 0;
				target13.state = 0;
				target12.state = 1;
			}
		}

		//end H start I
		if (21 == count12_13)
		{
			target12.state = 0;
			target13.state = 0;
			count12_13 = 0;
			target15.state = 1;
		}
		//printf("target14.x is  %d \n", target14.x);
		if (0 != target14.state && 775 <= target14.x)
		{

			++count14_15;

			if (5 == count14_15 || 8 == count14_15 || 11 == count14_15)
			{
				target14.x = 0;
				target14.state = 0;
				target15.state = 1;
			}
		}

		if (0 != target15.state && 784 <= target15.x)
		{

			++count14_15;
			
			if (7 == count14_15 || 10 == count14_15)
			{
				//printf("inside count14_15 is  %d \n", count14_15);
				target15.x = 0;
				target15.state = 0;
				target14.state = 1;
			}
		}
		//printf("count14_15 is  %d \n", count14_15);
		//end  I = end total
		if (11 == count14_15)
		{
			
			target14.state = 0;
			target15.state = 0;
			count14_15 = 0;
			break;
		}
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		Drawcombopath();
		if (0 != target1.state)
		{
			DrawTarget(target1.x, target1.y, target1.w, target1.h, 0, 0, 255);
		}

		if (0 != target2.state)
		{
			DrawTarget(target2.x, target2.y, target2.w, target2.h, 255, 0, 0);

		}
		if (0 != target3.state)
		{
			DrawTarget(target3.x, target3.y, target3.w, target3.h, 0, 0, 0);
		}

		if (0 != target4.state)
		{
			DrawTarget(target4.x, target4.y, target4.w, target4.h, 255, 255, 0);

		}
		if (0 != target5.state)
		{
			DrawTarget(target5.x, target5.y, target5.w, target5.h, 0, 255, 20);

		}
		if (0 != target6.state)
		{
			DrawTarget(target6.x, target6.y, target6.w, target6.h, 255, 20, 20);
		}

		if (0 != target7.state)
		{
			DrawTarget(target7.x, target7.y, target7.w, target7.h, 0, 20, 150);

		}
		if (0 != target8.state)
		{
			DrawTarget(target8.x, target8.y, target8.w, target8.h, 20, 208, 20);
		}

		if (0 != target9.state)
		{
			DrawTarget(target9.x, target9.y, target9.w, target9.h, 0, 0, 150);

		}
		if (0 != target10.state)
		{
			DrawTarget(target10.x, target10.y, target10.w, target10.h, 250, 0, 20);
		}

		if (0 != target11.state)
		{
			DrawTarget(target11.x, target11.y, target11.w, target11.h, 0, 20, 150);

		}
		if (0 != target12.state)
		{
			DrawTarget(target12.x, target12.y, target12.w, target12.h, 250, 255, 20);
		}

		if (0 != target13.state)
		{
			DrawTarget(target13.x, target13.y, target13.w, target13.h, 20, 20, 150);

		}
		if (0 != target14.state)
		{
			DrawTarget(target14.x, target14.y, target14.w, target14.h, 10, 255, 205);
		}

		if (0 != target15.state)
		{
			DrawTarget(target15.x, target15.y, target15.w, target15.h, 255, 20, 20);

		}

		DrawTarget(790, 100, 10, 10, 0, 0, 0);
		
		//Drum
		
		Drawdrumdody();
		Drawdrum();
		Drawdrumblack();
		Drawinner();
		Drawfloor();

		doll.leftfaceframeback(139, 445);
		doll.leftDrawbody(230, 445, 30, 220, 255);
		doll.leftface(235, 445, 61, 255, 255, 255);
		doll.leftface(235, 445, 51, 250, 0, 50);
		doll.leftface(215, 430, 11, 0, 0, 0);
		doll.leftface(265, 425, 11, 0, 0, 0);
        //right mouth

		doll.leftface(251, 450, 14, 0, 0, 0);
		doll.leftface(251, 447, 14, 250, 0, 50);

		//left mouth
		doll.leftface(230, 453, 14, 0, 0, 0);
		doll.leftface(230, 450, 14, 250, 0, 50);

		//middle mouth
		
		doll.leftfaceframefont(230, 445);
		doll.leftfaceframebody(130, 375);
		doll.leftfaceframebody(130, 516);
		//Redguy();


		//right body
		doll.leftfaceframeback(671, 445);
		doll.leftDrawbody(670, 445, 250, 0, 50);
		doll.leftfaceframebody(571, 375);
		doll.leftfaceframebody(571, 516);
		doll.leftfaceframefont(581, 445);
		doll.leftface(583, 445, 61, 255, 255, 255);
		doll.leftface(583, 445, 51, 30, 220, 255);
		

		

		//right mouth
		doll.leftface(585, 455, 16, 255, 0, 0);

		doll.leftface(575, 445, 12, 30, 220, 255);
		
		doll.leftface(595, 445, 12, 30, 220, 255);

		//right eye
		doll.leftface(563, 430, 11, 0, 0, 0);
		doll.leftface(613, 430, 11, 0, 0, 0);
		
		
		


		//Floor

		//FsSleep(1);
		FsSwapBuffers();
	}
	//FsCloseWindow();
	player.End();
	return 0;
}
