CC=gcc
SRC=night_club.c
OUT=night_club
CFLAGS=-Wl,-z,norelro -fno-stack-protector -z execstack -no-pie

all $(SRC):
	  $(CC) $(CFLAGS) $(SRC) -o $(OUT)
clean:
	  rm -rf $(OUT)
