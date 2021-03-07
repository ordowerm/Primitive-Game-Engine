#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Vect2.h"

using namespace std;
class GameObject
{
protected:
	int id;
	string TAG;
	GameObject* parent;
	vector<GameObject*> children;
	Vect2 localPosition;
	Vect2 worldPosition;
	double localRotation;
	double worldRotation;
public:
	int GetId() { return id; }
	string GetString() { return TAG; }
	void Print() { cout << "Object #: " << id << " Name: \'" << TAG << "\'" << endl; }
};

