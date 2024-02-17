#define VGA_START   0xB8000
#define SIZE        4000

void vga_write(char*, char, short) {

}

void vga_clearscreen() {
    for (int i = 0; i <= SIZE; i++) {
        VGA_START[i] = 0;
    }
}