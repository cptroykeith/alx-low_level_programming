#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#define PRINT_LOOP_NODE(node) {\
		print_int_str(0, "[", 0); \
		print_ptr((void *)(node), 0); \
		print_int_str(0, "] ", 0); \
		print_int_str((node)->n, NULL, 0);\
		_putchar('\n'); }
#define PRINT_LOOP_NODE_2(node) {\
		print_int_str(0, "-> [", 0); \
		print_ptr((void *)(node), 0); \
		print_int_str(0, "] ", 0); \
		print_int_str((node)->n, NULL, 0);\
		_putchar('\n'); }
