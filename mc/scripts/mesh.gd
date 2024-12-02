extends Node2D

var peer: MultiplayerPeer
var uuid: int

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	peer = ENetMultiplayerPeer.new()
	uuid = multiplayer.get_unique_id()
	peer.create_mesh(uuid)
	
	print("Created mesh")
	print(uuid)


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
