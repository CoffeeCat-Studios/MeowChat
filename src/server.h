#ifndef SERVER_H
#define SERVER_H

#include <godot_cpp/classes/node2d.hpp>

namespace godot {

class Server : public Node2D {
	GDCLASS(Server, Node2D)

private:
	double time_passed;

protected:
	static void _bind_methods();

public:
	Server();
	~Server();

	void _process(double delta) override;
};

}

#endif
