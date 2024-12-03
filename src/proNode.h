#ifndef PRONODE_H
#define PRONODE_H

#include <godot_cpp/classes/sprite2d.hpp>

namespace godot {

class ProNode : public Sprite2D {
	GDCLASS(ProNode, Sprite2D)

private:
	double time_passed;

protected:
	static void _bind_methods();

public:
	ProNode();
	~ProNode();

	void _process(double delta) override;
};

}

#endif
