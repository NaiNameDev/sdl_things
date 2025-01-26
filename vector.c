typedef struct {
	float x;
	float y;
} vec2;

vec2 new_vec2(float x, float y) {
	return (vec2){x, y};
}

vec2 vec2plus(vec2 a1, vec2 a2) {
	return (vec2){a1.x + a2.x, a1.y + a2.y};
}
vec2 vec2minus(vec2 a1, vec2 a2) {
	return (vec2){a1.x - a2.x, a1.y - a2.y};
}
vec2 vec2mul(vec2 a1, vec2 a2) {
	return (vec2){a1.x * a2.x, a1.y * a2.y};
}
vec2 vec2dec(vec2 a1, vec2 a2) {
	return (vec2){a1.x / a2.x, a1.y / a2.y};
}

typedef struct {
	float x;
	float y;
	float z;
} vec3;

vec3 new_vec3(float x, float y, float z) {
	return (vec3){x, y, z};
}
/*
vec3 vec3plus(vec3 a1, vec3 a2) {
	return (vec3){a1.x + a2.x, a1.y + a2.y, a1.z + a2.z};
}
vec3 vec3minus(vec3 a1, vec3 a2) {
	return (vec3){a1.x - a2.x, a1.y - a2.y, a1.z - a2.z};
}
vec3 vec3mul(vec3 a1, vec3 a2) {
	return (vec3){a1.x * a2.x, a1.y * a2.y, a1.z * a2.z};
}
vec3 vec3mulnumber(vec3 a1, float number) {
	return (vec3){a1.x * number, a1.y * number, a1.z * number};
}
vec3 vec3dec(vec3 a1, vec3 a2) {
	return (vec3){a1.x / a2.x, a1.y / a2.y, a1.z / a2.z};
}
vec3 vec3decnumber(vec3 a1, float number) {
	return (vec3){a1.x / number, a1.y / number, a1.z / number};
}
vec3 normalize(vec3 vc) {
	float new = sqrt((vc.x * vc.x) + (vc.y * vc.y) + (vc.z * vc.z));
	return vec3decnumber(vc, new);
}
void printvec3(vec3 vc) {
	printf("vec3(%f, %f, %f)", vc.x, vc.y, vc.z);
}*/
