extends Button


# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	var button = Button.new()
	button.text = "Host Room"
	button.pressed.connect(self._button_pressed)
	add_child(button)
	
	
# reference: https://docs.godotengine.org/en/stable/classes/class_object.html
func _button_pressed():
	# By default, these expressions are interchangeable.
	multiplayer # Get the MultiplayerAPI object configured for this node.
	get_tree().get_multiplayer() # Get the default MultiplayerAPI object.
	# Create server.
	var peer = ENetMultiplayerPeer.new()
	var error = peer.create_server(12345, 10)
	if error:
		print(error)
	multiplayer.multiplayer_peer = peer
	print("Peer server created!")
	print("thanos pressed")


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
