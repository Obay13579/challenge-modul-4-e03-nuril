// kernel.c
void main() {
  char* str = "FP telah menunggumu";
  int i = 0;

  for (i = 0; str[i] != '\0'; i++) {
    char warna = 0x5;
    putInMemory(0xB000, 0x8000 + i * 2, str[i]);
    putInMemory(0xB000, 0x8001 + i * 2, warna);
  }

  while (1);
}
