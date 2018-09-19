#include "Vector3d.hpp"

Vector3d::Vector3d( float vX, float vY, float vZ): _vX(vX), _vY(vY), _vZ(vZ){
}

Vector3d::Vector3d( void ){
}

Vector3d::~Vector3d( void ){
}

void	Vector3d::incX( float num){
	this->_vX += num;
}

void	Vector3d::incY( float num){
	this->_vY += num;
}

void	Vector3d::incZ( float num){
	this->_vZ += num;
}

void	Vector3d::decX( float num){
	this->_vX -= num;
}

void	Vector3d::decY( float num){
	this->_vY -= num;
}

void	Vector3d::decZ( float num){
	this->_vZ -= num;
}

void	Vector3d::setAll( float vX, float vY, float vZ){
	this->_vX = vX;
	this->_vY = vY;
	this->_vZ = vZ;
}