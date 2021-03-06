#pragma once

#include "types.h"

class Sphere : public BaseObject
{
	float rad;

	public:
		Sphere(glm::vec3 position, glm::vec3 direction, glm::vec3 color, float radius);
		bool intersect(const bvh::Ray<float>& ray, HitResult& hitOut) const;
		void setHitColor(HitResult& hitDataOut) const;
};

class Plane : public BaseObject
{
	public:
		Plane(glm::vec3 position, glm::vec3 direction, glm::vec3 color = glm::vec3(1.f));
		bool intersect(const bvh::Ray<float>& ray, HitResult& hitOut) const;
		void setHitColor(HitResult& hitDataOut) const;
};