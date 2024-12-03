#ifndef MESHNODE_H
#define MESHNODE_H

#include <godot_cpp/classes/node2d.hpp>

namespace godot 
{

	class MeshNode : public Node2D 
	{
		GDCLASS(MeshNode, Node2D)

	private:

	protected:
		static void _bind_methods();

	public:
		MeshNode();
		~MeshNode();

		void _process(double delta) override;
        // static void _bind_methods();
		void create_mesh();
	};

}

#endif
