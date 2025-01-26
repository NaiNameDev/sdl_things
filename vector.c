#include <math.h>

typedef struct {
	float x;
	float y;
} vec2;

vec2 new_vec2(float x, float y) {
	return (vec2){x, y};
}
vec2 vec2zero() {
	return (vec2){0, 0};
}
vec2 vec2fromnum(float num) {
	return (vec2){num, num};
}

vec2 vec2plus(vec2 a1, vec2 a2) {
	return (vec2){a1.x + a2.x, a1.y + a2.y};
}
vec2 vec2plusnum(vec2 a1, float num) {
	return (vec2){a1.x + num, a1.y + num};
}

vec2 vec2minus(vec2 a1, vec2 a2) {
	return (vec2){a1.x - a2.x, a1.y - a2.y};
}
vec2 vec2minusnum(vec2 a1, float num) {
	return (vec2){a1.x - num, a1.y - num};
}

vec2 vec2mul(vec2 a1, vec2 a2) {
	return (vec2){a1.x * a2.x, a1.y * a2.y};
}
vec2 vec2mulnum(vec2 a1, float num) {
	return (vec2){a1.x * num, a1.y * num};
}

vec2 vec2dec(vec2 a1, vec2 a2) {
	return (vec2){a1.x / a2.x, a1.y / a2.y};
}
vec2 vec2decnum(vec2 a1, float num) {
	return (vec2){a1.x / num, a1.y / num};
}

vec2 vec2normalize(vec2 vc) {
	float vc2 = sqrt((vc.x * vc.x) + (vc.y * vc.y));
	return vec2decnum(vc, vc2);
}

void printvec2(vec2 vc) {
	printf("vec2(%f, %f)", vc.x, vc.y);
}

typedef struct {
	float x;
	float y;
	float z;
} vec3;

vec3 new_vec3(float x, float y, float z) {
	return (vec3){x, y, z};
}
vec3 vec3zero() {
	return (vec3){0, 0, 0};
}
vec3 vec3fromnum(float num) {
	return (vec3){num, num, num};
}

vec3 vec3plus(vec3 a1, vec3 a2) {
	return (vec3){a1.x + a2.x, a1.y + a2.y, a1.z + a2.z};
}
vec3 vec3plusnum(vec3 a1, float num) {
	return (vec3){a1.x + num, a1.y + num, a1.z + num};
}

vec3 vec3minus(vec3 a1, vec3 a2) {
	return (vec3){a1.x - a2.x, a1.y - a2.y, a1.z - a2.z};
}
vec3 vec3minusnum(vec3 a1, float num) {
	return (vec3){a1.x - num, a1.y - num, a1.z - num};
}

vec3 vec3mul(vec3 a1, vec3 a2) {
	return (vec3){a1.x * a2.x, a1.y * a2.y, a1.z * a2.z};
}
vec3 vec3mulnum(vec3 a1, float num) {
	return (vec3){a1.x * num, a1.y * num, a1.z * num};
}

vec3 vec3dec(vec3 a1, vec3 a2) {
	return (vec3){a1.x / a2.x, a1.y / a2.y, a1.z / a2.z};
}
vec3 vec3decnum(vec3 a1, float num) {
	return (vec3){a1.x / num, a1.y / num, a1.z / num};
}

vec3 vec3normalize(vec3 vc) {
	float vc2 = sqrt((vc.x * vc.x) + (vc.y * vc.y) + (vc.z * vc.z));
	return vec3decnum(vc, vc2);
}

void printvec3(vec3 vc) {
	printf("vec3(%f, %f, %f)", vc.x, vc.y, vc.z);
}
