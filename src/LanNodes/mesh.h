#ifndef MESH_H
#define MESH_H

#include <godot_cpp/classes/node2d.hpp>

namespace godot 
{

	class Mesh : public Node2D 
	{
		GDCLASS(Mesh, Node2D)

	private:

	protected:
		static void _bind_methods();

	public:
		Mesh();
		~Mesh();

		void _process(double delta) override;
        // static void _bind_methods();
		void create_mesh();
	};

}

#endif
