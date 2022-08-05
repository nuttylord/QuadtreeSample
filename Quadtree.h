#pragma once

#include <vector>
#include <set>

using std::set;

class Quadtree {
public: 
	Quadtree(float x, float y, float width, float height, int level, int maxObjects);
	Quadtree(int x, int y, int width, int height, int level, int maxObjects);
	

	~Quadtree();
	
	void				CheckObjectCollision(set<GameObjectPtr>& collisionSet, vector<vector<GameObjectPtr>>& QuadVector);
	bool				contains(SDL_Rect quad, GameObjectPtr node);
	SDL_Rect			getBoundingRect() const;

private:
	void						Clear(set< GameObjectPtr > set);

	float						x;
	float						y;
	float						width;
	float						height;
	int							level;
	int							maxObjects;
    
	SDL_Rect					quadRect;

	set<GameObjectPtr>			mNESet, mNWSet, mSWSet, mSESet;
	SDL_Rect					mBoundingRect;
	
	unique_ptr<Quadtree>		mNW;
	unique_ptr<Quadtree>		mNE;
	unique_ptr<Quadtree>		mSW;
	unique_ptr<Quadtree>		mSE;
};