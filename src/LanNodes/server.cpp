#include "server.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

// we bind variables here to the settings (i think)
void Server::_bind_methods() 
{
}

// init func
Server::Server()
{
	// Initialize any variables here.
	time_passed = 0.0;
}

// deinit func
Server::~Server() 
{
	// Add your cleanup here.
}

// process function here runs every frame (like in gd script)
void Server::_process(double delta) 
{
	// increment w/ delta to change each frame
	time_passed += delta;

	movePos();
}


void Server::movePos()
{
	// move the position
	Vector2 new_position = Vector2(10.0 + (10.0 * sin(time_passed * 4.0)), 10.0 + (10.0 * cos(time_passed * 3)));

	// set the new position
	set_position(new_position);
}