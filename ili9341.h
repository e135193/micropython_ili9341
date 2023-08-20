#ifndef __ILI9341_H__
#define __ILI9341_H__

#ifdef __cplusplus
extern "C" {
#endif

// color modes
#define COLOR_MODE_65K      0x50
#define COLOR_MODE_262K     0x60
#define COLOR_MODE_12BIT    0x03
#define COLOR_MODE_16BIT    0x05
#define COLOR_MODE_18BIT    0x06
#define COLOR_MODE_16M      0x07

 // ---------------------------------------------------------------
  #define ILI9341_DDR_CONTROL   DDRC
  #define ILI9341_PORT_CONTROL  PORTC
  #define ILI9341_PIN_RST       4
  #define ILI9341_PIN_WR        1     // Write
  #define ILI9341_PIN_RS        2     // Register Select -> D/C
  #define ILI9341_PIN_CS        3     // Chip Select
  #define ILI9341_PIN_RD        0     // Read

  // COMMAND DEFINITION
  // ---------------------------------------------------------------
  #define ILI9341_NOP           0x00  // No Operation
  #define ILI9341_SWRESET       0x01  // Software Reset
  #define ILI9341_RDDIDIF       0x04  // Read Display Identification Information
  #define ILI9341_RDDST         0x09  // Read Display Status
  #define ILI9341_RDDPM         0x0A  // Read Display Power Mode
  #define ILI9341_RDDMADCTL     0x0B  // Read Display MADCTL
  #define ILI9341_RDDCOLMOD     0x0C  // Read Display Pixel Format
  #define ILI9341_RDDIM         0x0D  // Read Display Image Format
  #define ILI9341_RDDSM         0x0E  // Read Display Signal Mode
  #define ILI9341_RDDSDR        0x0F  // Read Display Self Diagnostics Result
  // ---------------------------------------------------------------
  #define ILI9341_SLPIN         0x10  // Enter Sleep Mode
  #define ILI9341_SLPOUT        0x11  // Sleep Out
  #define ILI9341_PTLON         0x12  // Partial Mode On
  #define ILI9341_NORON         0x13  // Normal Display On
  // ---------------------------------------------------------------
  #define ILI9341_DINVOFF       0x20  // Dislpay Inversion Off
  #define ILI9341_DINVON        0x21  // Dislpay Inversion On
  #define ILI9341_GAMSET        0x26  // Gamma Set  
  #define ILI9341_DISPOFF       0x28  // Display OFF
  #define ILI9341_DISPON        0x29  // Display ON
  #define ILI9341_CASET         0x2A  // Column Address Set
  #define ILI9341_PASET         0x2B  // Page Address Set
  #define ILI9341_RAMWR         0x2C  // Memory Write
  #define ILI9341_RGBSET        0x2D  // Color Set
  #define ILI9341_RAMRD         0x2E  // Memory Read
  // ---------------------------------------------------------------
  #define ILI9341_PLTAR         0x30  // Partial Area
  #define ILI9341_VSCRDEF       0x33  // Vertical Scroll Definition
  #define ILI9341_TEOFF         0x34  // Tearing Effect Line OFF
  #define ILI9341_TEON          0x35  // Tearing Effect Line ON
  #define ILI9341_MADCTL        0x36  // Memory Access Control
  #define ILI9341_VSSAD         0x37  // Vertical Scrolling Start Address
  #define ILI9341_IDMOFF        0x38  // Idle Mode OFF
  #define ILI9341_IDMON         0x39  // Idle Mode ON
  #define ILI9341_COLMOD        0x3A  // Pixel Format Set
  #define ILI9341_WMCON         0x3C  // Write Memory Continue
  #define ILI9341_RMCON         0x3E  // Read Memory Continue
  // ---------------------------------------------------------------
  #define ILI9341_IFMODE        0xB0  // RGB Interface Signal Control
  #define ILI9341_FRMCRN1       0xB1  // Frame Control (In Normal Mode)
  #define ILI9341_FRMCRN2       0xB2  // Frame Control (In Idle Mode)
  #define ILI9341_FRMCRN3       0xB3  // Frame Control (In Partial Mode)
  #define ILI9341_INVTR         0xB4  // Display Inversion Control
  #define ILI9341_PRCTR         0xB5  // Blanking Porch Control
  #define ILI9341_DISCTRL       0xB6  // Display Function Control
  #define ILI9341_ETMOD         0xB7  // Entry Mode Set
  #define ILI9341_BKCR1         0xB8  // Backlight Control 1
  #define ILI9341_BKCR2         0xB9  // Backlight Control 2
  #define ILI9341_BKCR3         0xBA  // Backlight Control 3
  #define ILI9341_BKCR4         0xBB  // Backlight Control 4
  #define ILI9341_BKCR5         0xBC  // Backlight Control 5
  #define ILI9341_BKCR7         0xBE  // Backlight Control 7
  #define ILI9341_BKCR8         0xBF  // Backlight Control 8
  // ---------------------------------------------------------------
  #define ILI9341_PWCTRL1       0xC0  // Power Control 1
  #define ILI9341_PWCTRL2       0xC1  // Power Control 2
  #define ILI9341_VCCR1         0xC5  // VCOM Control 1
  #define ILI9341_VCCR2         0xC7  // VCOM Control 2
   // ---------------------------------------------------------------
  #define ILI9341_RDID1         0xDA  // Read ID1
  #define ILI9341_RDID2         0xDB  // Read ID2
  #define ILI9341_RDID3         0xDC  // Read ID3
  // ---------------------------------------------------------------
  #define ILI9341_GMCTRP1       0xE0  // Positive Gamma Correction
  #define ILI9341_GMCTRN1       0xE1  // Neagtove Gamma Correction

  // Extend register commands
  // --------------------------------------------------------------- 
  //
  #define ILI9341_LCD_POWERA    0xCB   // Power control A register
  #define ILI9341_LCD_POWERB    0xCF   // Power control B register
  #define ILI9341_LCD_DTCA      0xE8   // Driver timing control A
  #define ILI9341_LCD_DTCB      0xEA   // Driver timing control B
  #define ILI9341_LCD_POWER_SEQ 0xED   // Power on sequence register
  #define ILI9341_LCD_3GAMMA_EN 0xF2   // 3 Gamma enable register
  #define ILI9341_LCD_PRC       0xF7   // Pump ratio control register

// Color definitions
#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

#define OPTIONS_WRAP_V 0x01
#define OPTIONS_WRAP_H 0x02
#define OPTIONS_WRAP   0x03

typedef struct _Point {
    mp_float_t x;
    mp_float_t y;
} Point;

typedef struct _Polygon {
    int length;
    Point *points;
} Polygon;

typedef struct _ili9341_rotation_t {
    uint8_t madctl;
    uint16_t width;
    uint16_t height;
    uint16_t colstart;
    uint16_t rowstart;
} ili9341_rotation_t;

// this is the actual C-structure for our new object
typedef struct _ili9341_ILI9341_obj_t {
    mp_obj_base_t base;
    mp_obj_base_t *spi_obj;
    mp_file_t *fp;              // file object
    uint16_t *i2c_buffer;       // resident buffer if buffer_size given

    // m_malloc'd pointers
    void *work;                 // work buffer for jpg & png decoding
    uint8_t *scanline_ringbuf;  // png scanline_ringbuf
    uint8_t *palette;           // png palette
    uint8_t *trans_palette;     // png trans_palette
    uint8_t *gamma_table;       // png gamma_table

    size_t buffer_size;         // resident buffer size, 0=dynamic
    uint16_t display_width;     // physical width
    uint16_t width;             // logical width (after rotation)
    uint16_t display_height;    // physical width
    uint16_t height;            // logical height (after rotation)
    uint8_t colstart;
    uint8_t rowstart;
    uint8_t rotation;
    ili9341_rotation_t *rotations;   // list of rotation tuples [(madctl, colstart, rowstart)]
    uint8_t rotations_len;          // number of rotations
    mp_obj_t custom_init;           // custom init sequence
    uint8_t color_order;
    bool inversion;
    uint8_t madctl;
    uint8_t options;            // options bit array
    mp_hal_pin_obj_t reset;
    mp_hal_pin_obj_t dc;
    mp_hal_pin_obj_t cs;
    mp_hal_pin_obj_t backlight;

    uint8_t bounding;
    uint16_t min_x;
    uint16_t min_y;
    uint16_t max_x;
    uint16_t max_y;

} ili9341_ILI9341_obj_t;

mp_obj_t ili9341_ILI9341_make_new(const mp_obj_type_t *type, size_t n_args, size_t n_kw, const mp_obj_t *args);

extern void draw_pixel(ili9341_ILI9341_obj_t *self, int16_t x, int16_t y, uint16_t color);
extern void fast_hline(ili9341_ILI9341_obj_t *self, int16_t x, int16_t y, int16_t w, uint16_t color);

#ifdef  __cplusplus
}
#endif /*  __cplusplus */

#endif  /*  __ILI9341_H__ */
