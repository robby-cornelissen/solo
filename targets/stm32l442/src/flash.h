#ifndef _FLASH_H_H
#define _FLASH_H_H

void flash_erase_page(uint8_t page);
void flash_write_dword(uint32_t addr, uint64_t data);
void flash_write(uint32_t addr, uint8_t * data, size_t sz);

#define FLASH_PAGE_SIZE     2048

#define flash_addr(page)    (0x08000000 + ((page)*FLASH_PAGE_SIZE))

#define FLASH_PAGE_START    0
#define FLASH_PAGE_END      127

#endif
