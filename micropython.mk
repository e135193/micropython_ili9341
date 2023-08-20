ILI9341_MOD_DIR := $(USERMOD_DIR)

CFLAGS_USERMOD += -I$(ILI9341_MOD_DIR)

SRC_USERMOD += $(addprefix $(ILI9341_MOD_DIR)/, ili9341.c)
SRC_USERMOD += $(addprefix $(ILI9341_MOD_DIR)/, mpfile.c)
SRC_USERMOD += $(addprefix $(ILI9341_MOD_DIR)/jpg/, tjpgd565.c)
SRC_USERMOD += $(addprefix $(ILI9341_MOD_DIR)/png/, pngle.c)
SRC_USERMOD += $(addprefix $(ILI9341_MOD_DIR)/png/, miniz.c)
