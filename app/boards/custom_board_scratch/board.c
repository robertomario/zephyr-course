#include <zephyr/init.h>
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

static int board_custom_board_scratch_init(void) {
    LOG_INF("Board Initialized");
}
