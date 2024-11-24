#ifndef MESH_H
#define MESH_H

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/e_net_multiplayer_peer.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>

namespace godot 
{

	class Mesh : public Node 
	{
		GDCLASS(Mesh, Node)

	private:
		uint32_t uuid;

	protected:
		static void _bind_methods();

	public:
		Mesh();
		~Mesh();

		void _process(double delta) override;
        static void _bind_methods();
	};

}

#endif
