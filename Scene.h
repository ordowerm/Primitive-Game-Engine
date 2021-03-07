#pragma once
#include <map>
#include "GameObject.h"
#include <deque>

using namespace std;
class Scene
{
private:
	map<int, GameObject*> obj_map;
	deque<int> free_ids; //when game objects get destroyed, enqueue their IDs. When new objects get spawned, assign them these IDs. Otherwise, the numbers might get too big.

public:
	GameObject* GetGameObject(int);//game object by id number
	void AddGameObject(GameObject*); //add game object to scene
	void UpdateObjects(); //update underlying models
	void RenderObjects(); 
};

