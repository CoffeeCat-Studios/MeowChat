#include "simple.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/engine.hpp>

#include <godot_cpp/core/godot.hpp>
#include <godot_cpp/classes/button.hpp>

using namespace godot;

void Simple::_bind_methods() {
}

Simple::Simple() {
	// Initialize any variables here.
}

Simple::~Simple() {
	// Add your cleanup here.
}

// Called when the node enters the scene tree for the first time.
void Simple::_ready() {
	print("Simple ready")
}
	
// reference: https://docs.godotengine.org/en/stable/classes/class_object.html
void Simple::_button_pressed() {
	print("Button pressed!")
}


// Called every frame. 'delta' is the elapsed time since the previous frame.
void Simple::_process(double delta) {

	if (!Engine::get_singleton()->is_editor_hint())
	{
		break;
	}
}
