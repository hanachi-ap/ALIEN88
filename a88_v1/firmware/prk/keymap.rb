require "via"
#require "consumer_key"
#require "mouse_key"

puts 'Keyboard  : Alien88'
puts 'Controller: PGA2040'

kbd = Keyboard.new

LED_PIN = 9
rgb  = RGB.new(
  LED_PIN,   # pin number
  94,        # size of underglow pixel
  0,         # size of backlight pixel
  false      # 32bit data will be sent to a pixel if true while 24bit if false
)

# :swirl  :rainbow_mood  :breath  :nokogiri :static  :ruby
rgb.effect     = :swirl
rgb.speed      = 22  # 1-31  / default: 22
rgb.hue        = 240 # 0-359 / default: 0
rgb.saturation = 100 # 0-100 / default: 100
rgb.value      = 1   # 1-31  / default: 13
kbd.append rgb

kbd.init_pins(
  [ 2, 3, 4, 5, 6, 7 ],                              # row0  row1 ... respectively
  [ 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 ]  # col0  col1 ... respectively
)

  #1     #2        #3      #4      #5      #6      #7      #8      #9      #10      #11      #12      #13      #14      #15     #16      #wheel
kbd.add_layer :default, %i(
  ______  KC_GRV    KC_F1   KC_F2   KC_F3   KC_F4   KC_F5   KC_F6   KC_F7   KC_F8    KC_F9    KC_F10   KC_F11   KC_F12   KC_F13  ______   KC_DOWN
  KC_1    KC_ESC    KC_1    KC_2    KC_3    KC_4    KC_5    KC_6    KC_7    KC_8     KC_9     KC_0     KC_MINS  KC_EQUAL KC_DEL  KC_HOME  ______
  KC_2    KC_TAB    KC_Q    KC_W    KC_E    KC_R    KC_T    KC_Y    KC_U    KC_I     KC_O     KC_P     KC_LBRC  KC_RBRC  KC_BSPC KC_END   KC_C
  KC_3    KC_LCTL   KC_A    KC_S    KC_D    KC_F    KC_G    KC_H    KC_J    KC_K     KC_L     KC_SCLN  KC_QUOT  KC_RBRC  KC_ENT  KC_PUP   KC_UP
  KC_4    KC_LSFT   KC_Z    KC_X    KC_C    KC_V    KC_B    KC_N    KC_M    KC_COMM  KC_DOT   KC_SLSH  KC_RSFT  ______   KC_UP   KC_PDOWN ______
  KC_5  KC_LCTL   KC_LGUI KC_LALT KC_SPC  KC_F13  KC_SPC  KC_SPC  ______  RAISE    LOWER    KC_RALT  KC_LEFT  ______   KC_DOWN KC_RIGHT ______
) 
kbd.add_layer :raise, %i(
   ______  KC_GRV    KC_F1   KC_F2   KC_F3   KC_F4   KC_F5   KC_F6   KC_F7   KC_F8    KC_F9    KC_F10   KC_F11   KC_F12   KC_F13  ______   KC_A
   KC_1    KC_ESC    KC_1    KC_2    KC_3    KC_4    KC_5    KC_6    KC_7    KC_8     KC_9     KC_0     KC_MINS  KC_EQUAL KC_DEL  KC_HOME  KC_B
   KC_2    KC_TAB    KC_Q    KC_W    KC_E    KC_R    KC_T    KC_Y    KC_U    KC_I     KC_O     KC_P     KC_LPRN  KC_BSLS  KC_BSPC KC_END   KC_C
   KC_3    KC_LCTL   KC_A    KC_S    KC_D    KC_F    KC_G    KC_H    KC_J    KC_K     KC_L     KC_SCLN  KC_QUOT  KC_RPRN  KC_ENT  KC_PUP   KC_D
   KC_4    KC_LSFT   KC_Z    KC_X    KC_C    KC_V    KC_B    KC_N    KC_M    KC_COMM  KC_DOT   KC_SLSH  KC_RSFT  ______   KC_UP   KC_PDOWN KC_E
   KC_5    KC_LCTL   KC_LGUI KC_LALT KC_SPC  KC_SPC  KC_SPC  KC_SPC  ______  RAISE    LOWER    KC_RALT  KC_UP    ______   KC_DOWN KC_LEFT  ______
)
kbd.add_layer :lower, %i(
   ______  KC_GRV    KC_F1   KC_F2   KC_F3   KC_F4   KC_F5   KC_F6   KC_F7   KC_F8    KC_F9    KC_F10   KC_F11   KC_F12   KC_F13  ______   KC_A
   KC_1    KC_ESC    KC_1    KC_2    KC_3    KC_4    KC_5    KC_6    KC_7    KC_8     KC_9     KC_0     KC_MINS  KC_EQUAL KC_DEL  KC_HOME  KC_B
   KC_2    KC_TAB    KC_Q    KC_W    KC_E    KC_R    KC_T    KC_Y    KC_U    KC_I     KC_O     KC_P     KC_LPRN  KC_BSLS  KC_BSPC KC_END   KC_C
   KC_3    KC_LCTL   KC_A    KC_S    KC_D    KC_F    KC_G    KC_H    KC_J    KC_K     KC_L     KC_SCLN  KC_QUOT  KC_RPRN  KC_ENT  KC_PUP   KC_D
   KC_4    KC_LSFT   KC_Z    KC_X    KC_C    KC_V    KC_B    KC_N    KC_M    KC_COMM  KC_DOT   KC_SLSH  KC_RSFT  ______   KC_UP   KC_PDOWN KC_E
   KC_5    KC_LCTL   KC_LGUI KC_LALT KC_SPC  KC_SPC  KC_SPC  KC_SPC  ______  RAISE    LOWER    KC_RALT  KC_UP    ______   KC_DOWN KC_LEFT  ______
)

kbd.define_mode_key :RAISE, [ nil, :raise, nil, nil ]
kbd.define_mode_key :LOWER, [ nil, :lower, nil, nil ]

kbd.define_composite_key :CAP_A, %i(KC_A KC_RSFT)
kbd.via = true
kbd.via_layer_count = 3
kbd.start!