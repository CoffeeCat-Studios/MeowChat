#include "meshNode.h"
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/e_net_multiplayer_peer.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

// following this: https://docs.godotengine.org/en/stable/classes/class_enetmultiplayerpeer.html#class-enetmultiplayerpeer

using namespace godot;

// we bind variables here to the settings (i think)
void MeshNode::_bind_methods() 
{
    ClassDB::bind_method(D_METHOD("create_mesh"), &MeshNode::create_mesh);
}

// init func
MeshNode::MeshNode()
{
    // Initialize any variables here
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
        
	}

}

void MeshNode::create_mesh()
{
    Ref<ENetMultiplayerPeer> peer;
    peer.instantiate();
    int32_t new_uuid = peer->generate_unique_id();

    // create mesh
    peer->create_mesh(new_uuid);
    UtilityFunctions::print(String("Created mesh with UUID: {0}").format(Array::make(new_uuid)));
}