typedef char int8_t;
int8_t set_buffer(int8_t a,int8_t b);
int8_t clr_buffer(int8_t a,int8_t b);
int8_t swap_buffer(int8_t a,int8_t b,int8_t c);
int8_t check_bit(int8_t a,int8_t b);
int8_t toggle_bit(int8_t a,int8_t b);
int8_t sign_conv(int8_t *a);
int8_t binary(int8_t a);


int8_t set_buffer1(int8_t *a,int8_t *b);
int8_t clr_buffer1(int8_t *a,int8_t *b);
int8_t swap_buffer1(int8_t *a,int8_t *b,int8_t *c);
int8_t check_bit1(int8_t a,int8_t b);
int8_t toggle_bit1(int8_t *a,int8_t *b);
int8_t sign_conv1(int8_t *a);
int8_t binary1(int8_t *a);


#define SET_BUFFER(x,y) (x|(1<<y))
#define CLR_BUFFER(x,y) (x &(~(1<<y)))
#define SIGN_CONV(x) (~(x) +1)

