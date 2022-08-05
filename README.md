# QuadtreeSample
This repo contains code extracted from my old 'DeathFactory' college project on request. 
This quadtree was created to refine the collision detection of the game and implemented on the server-side collisions in the multiplayer game. 
If you intend to use this code, know that the second parameter QuadVector of CheckObjectCollision() is the output of collisions. 
It is a vector of pairs of collisions (vector was used due to my server-side code, implementing set would make more sense). 
