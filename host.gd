extends Button
const Server = preload("res://server.gd")

# Called when the node enters the scene tree for the first time.
func _ready():
	var button = Button.new()
	button.text = "Host Room"
	button.pressed.connect(self._button_pressed)
	add_child(button)

# reference: https://docs.godotengine.org/en/stable/classes/class_object.html
func _button_pressed():
	var server = Server.new()
	server.createServer()
	
	# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
