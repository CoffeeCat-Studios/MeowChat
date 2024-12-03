#include "simpleButton.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/godot.hpp>
// #include <godot-cpp/classes/Input.hpp>

#include <godot_cpp/variant/utility_functions.hpp>
/*
Note to debug print use this library
UtilityFunction::print("mssg");
*/

using namespace godot;

void SimpleButton::_bind_methods() {
	// bind this method to the DB class
	// need to be done for every method
	ClassDB::bind_method(D_METHOD("_button_pressed"), &SimpleButton::_button_pressed);
}

SimpleButton::SimpleButton() {
	// Initialize any variables here.
	// Input::map_action("button_pressed", Input::KEY_SPACE);
}

SimpleButton::~SimpleButton() {
	// Add your cleanup here.
}

// Called when the node enters the scene tree for the first time.
void SimpleButton::_ready() {
	UtilityFunctions::print("Simple ready");

	// get ref to the button
	Button *button = Object::cast_to<Button>(this);

	if (button) {
		// connect the pressed signal to the _button_pressed func
		button->connect("pressed", this, "_button_pressed");
	} else {
		UtilityFunctions::print("button node not found")
	}
}

// Called every frame. 'delta' is the elapsed time since the previous frame.
void SimpleButton::_process(double delta) {

	if (!Engine::get_singleton()->is_editor_hint())
	{
	}
}

// reference: https://docs.godotengine.org/en/stable/classes/class_object.html
void SimpleButton::_button_pressed() {

	UtilityFunctions::print("Button pressed!");
	
}