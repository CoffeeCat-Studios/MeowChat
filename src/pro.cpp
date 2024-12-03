#include "pro.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/engine.hpp>

using namespace godot;

void Pro::_bind_methods() {
}

Pro::Pro() {
	// Initialize any variables here.
	time_passed = 0.0;
}

Pro::~Pro() {
	// Add your cleanup here.
}

void Pro::_process(double delta) {

	if (!Engine::get_singleton()->is_editor_hint())
	{
		time_passed += delta;

		Vector2 new_position = Vector2(10.0 + (10.0 * sin(time_passed * 2.0)), 10.0 + (10.0 * cos(time_passed * 1.5)));

		set_position(new_position);
	}
}