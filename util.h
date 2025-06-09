/* See LICENSE.dwm file for copyright and license details. */

#include <xkbcommon/xkbcommon.h>

void die(const char *fmt, ...);
void *ecalloc(size_t nmemb, size_t size);
int fd_set_nonblock(int fd);
xkb_keysym_t keymap_get_one_sym_by_level(struct xkb_keymap *keymap,
		xkb_keycode_t key, xkb_layout_index_t layout, xkb_level_index_t level);
