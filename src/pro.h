#ifndef Pro_H
#define Pro_H

#include <godot_cpp/classes/sprite2d.hpp>

namespace godot {

class Pro : public Sprite2D {
	GDCLASS(Pro, Sprite2D)

private:
	double time_passed;

protected:
	static void _bind_methods();

public:
	Pro();
	~Pro();

	void _process(double delta) override;
};

}

#endif
