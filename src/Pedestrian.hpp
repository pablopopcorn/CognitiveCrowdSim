#pragma once

#include <glm.hpp>
#include <SDL.h>

class Pedestrian
{
private:
	glm::vec2 position, velocity, acceleration;
	float mass;
	float radius;
	//glm::vec2 forward;
	float /*walkingSpeed,*/ bestWalkingSpeed;
	glm::vec2 destinationPoint;
	//float fieldOfView;
	float visionDepth;
	//glm::vec2 *rays;
	//unsigned int numRays;
	

public:
	Pedestrian();
	Pedestrian(const glm::vec2 &position);
	Pedestrian(const glm::vec2 &position, const glm::vec2 &destinationPoint);

	inline glm::vec2 getPosition() const { return position; }
	inline void setPosition(const glm::vec2 &position) { this->position = position; }
	inline glm::vec2 getVelocity() const { return velocity; }
	inline void setVelocity(const glm::vec2 &velocity) { this->velocity = velocity; }
	inline glm::vec2 getAcceleration() const { return acceleration; }
	inline void setAcceleration(const glm::vec2 &acceleration) { this->acceleration = acceleration; }
	inline float getRadius() const { return radius; }
	//inline glm::vec2 getForward() const { return forward; }
	//inline void setForward(const glm::vec2 &forward) { this->forward = forward; }
	inline glm::vec2 getDestinationPoint() const { return destinationPoint; }
	//inline float getWalkingSpeed() const { return walkingSpeed; }
	//inline void setWalkingSpeed(float walkingSpeed) { this->walkingSpeed = walkingSpeed; }
	inline float getBestWalkingSpeed() const { return bestWalkingSpeed; }
	inline float getVisionDepth() const { return visionDepth; }
	//inline unsigned int getNumRays() const { return numRays; }
	//inline glm::vec2 getRay(unsigned int index) const { assert(index >= 0 && index < numRays); return rays[index]; }

	//void calculateRays();
	void update(const glm::vec2 &v_des, float deltaTime);
	void render(SDL_Renderer *renderer, bool debug);
};