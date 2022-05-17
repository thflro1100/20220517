#pragma once
#include "Vector2D.h"
class Module
{

public:
	Module();
	~Module();

	Vector2D Location;
	int HP;
	bool Attack;
	int Gold;

	void Moving();
	void Attack();
	


};

