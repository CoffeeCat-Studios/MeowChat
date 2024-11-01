extends Node

# reference: https://docs.godotengine.org/en/stable/tutorials/networking/high_level_multiplayer.html

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	# By default, these expressions are interchangeable.
	multiplayer # Get the MultiplayerAPI object configured for this node.
	get_tree().get_multiplayer() # Get the default MultiplayerAPI object.
	createClient()
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass

func createClient():
	# Create client.
	var peer = ENetMultiplayerPeer.new()
	peer.create_client("192.168.4.1", 12345)
	multiplayer.multiplayer_peer = peer
