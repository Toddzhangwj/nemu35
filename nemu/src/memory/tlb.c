#include "memory/tlb.h"

uint32_t readTLB(uint32_t tg) {
	int i;
	for(i = 0; i < TLB_SIZE; i++) {
		if(tlb[i].valid && tlb[i].tag == tg) return tlb[i].page;
	}
	return -1;//invalid
}
void resetTLB() {
	
}

void writeTLB(uint32_t tg, uint32_t page) {
	
	return;
}
