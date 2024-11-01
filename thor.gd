extends Button


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	var button = Button.new()
	button.text = "Join Room"
	button.pressed.connect(self._button_pressed)
	add_child(button)
	# By default, these expressions are interchangeable.
	multiplayer # Get the MultiplayerAPI object configured for this node.
	get_tree().get_multiplayer() # Get the default MultiplayerAPI object.
	# Create server.
	var peer = ENetMultiplayerPeer.new()
	peer.create_client("10.234.140.63", 12345)
	multiplayer.multiplayer_peer = peer
	print("Peer client created!")
	
# reference: https://docs.godotengine.org/en/stable/classes/class_object.html
func _button_pressed():
	print("thor pressed")


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
