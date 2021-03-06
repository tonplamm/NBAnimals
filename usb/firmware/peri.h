#define IS_SWITCH_PRESSED() !(PINC & (1<<PC2))

void init_peripheral();
void set_led(uint8_t pin, uint8_t state);
void set_led_value(uint8_t value);
uint16_t read_adc(uint8_t channel);
uint16_t get_light();
uint16_t get_accelero_X();
uint16_t get_accelero_Y();
uint16_t get_accelero_Z();
