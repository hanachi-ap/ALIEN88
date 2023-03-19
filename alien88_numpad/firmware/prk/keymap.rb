require "via"
#require "consumer_key"
#require "mouse_key"

puts 'Keyboard  : Alien88 NumPad'
puts 'Controller: PGA2040'

kbd = Keyboard.new

kbd.init_pins(
  [ 9, 8, 7, 6, 5, 4 ],                              # row0  row1 ... respectively
  [ 0, 1, 2, 3 ]  # col0  col1 ... respectively
)

  #1     #2        #3      #4      #5      #6      #7      #8      #9      #10      #11      #12      #13      #14      #15     #16      #wheel
kbd.add_layer :default, %i(
  KC_F1   KC_F2   KC_F3   KC_F4
  KC_1    KC_2    KC_3    KC_4  
  KC_Q    KC_W    KC_E    KC_R 
  KKC_A   KC_S    KC_D    KC_F  
  KC_Z    KC_X    KC_C    KC_V   
  KC_LGUI KC_LALT KC_SPC  KC_F13 
) 
kbd.add_layer :raise, %i(
  KC_F1   KC_F2   KC_F3   KC_F4
  KC_1    KC_2    KC_3    KC_4  
  KC_Q    KC_W    KC_E    KC_R 
  KKC_A   KC_S    KC_D    KC_F  
  KC_Z    KC_X    KC_C    KC_V 
)
kbd.add_layer :lower, %i(
  KC_F1   KC_F2   KC_F3   KC_F4
  KC_1    KC_2    KC_3    KC_4  
  KC_Q    KC_W    KC_E    KC_R 
  KKC_A   KC_S    KC_D    KC_F  
  KC_Z    KC_X    KC_C    KC_V 
)


kbd.start!