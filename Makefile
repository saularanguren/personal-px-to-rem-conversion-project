CC = gcc

TARGET = px-rem-converter

CFLAGS = -g -Wall

SRC = main.c src/print_welcome.c src/converter.c src/input_validation.c src/copy_to_clipboard.c

all:
	$(CC) $(CFLAGS) $(SRC) -o ./Build/$(TARGET)
clean:
	rm -rf ./Build/$(TARGET)