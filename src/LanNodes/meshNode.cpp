#include "meshNode.h"
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/class_db.hpp>

// following this: https://docs.godotengine.org/en/stable/classes/class_enetmultiplayerpeer.html#class-enetmultiplayerpeer

using namespace godot;

// we bind variables here to the settings (i think)
void MeshNode::_bind_methods() 
{
}

// init func
MeshNode::MeshNode()
{
    // Initialize any variables here
    Ref<ENetMultiplayerPeer> enet_peer;
    uuid = enet_peer->generate_unique_id();
}

// deinit func
MeshNode::~MeshNode() 
{
	// Add your cleanup here.
}

void MeshNode::_process (double delta)
{
    // increment w/ delta to change each frame
	if (!Engine::get_singleton()->is_editor_hint())
	{
        // print uuid every frame
		printf("uuid = %d\n", uuid);
	}

}
