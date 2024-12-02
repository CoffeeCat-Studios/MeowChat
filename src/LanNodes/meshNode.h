#ifndef MESHNODE_H
#define MESHNODE_H

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/e_net_multiplayer_peer.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>

namespace godot 
{

	class MeshNode : public Node 
	{
		GDCLASS(MeshNode, Node)

	private:
		uint32_t uuid;

	protected:
		static void _bind_methods();

	public:
		MeshNode();
		~MeshNode();

		void _process(double delta) override;
	};

}

#endif
