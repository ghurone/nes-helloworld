#include "neslib.h"

void main(void) {
  // Paleta de cores
  pal_col(0,0x02);	// Background (Azul escuro)
  pal_col(1,0x14);	// Rosinha
  pal_col(2,0x20);	// Cinza
  pal_col(3,0x30);	// Branco

  vram_adr(NTADR_A(2,2));		// Escolhe o endereco para ficar o texto
  vram_write("HELLO, WORLD!", 13);	// o que vai ser escrito e quantos char ele tem
  vram_adr(NTADR_A(2,4)); // idem
  vram_write("I AM ALIVE",10); // idem
  
  ppu_on_all(); // habilita o ppu (basicamente 'liga' a tela)
  
  while (1) ; //Loop infinito
}
