#include <zephyr/init.h>
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(main, LOG_LEVEL_INF);

static int board_custom_board_scratch_init(void) {
    LOG_INF("Board Initialized");
    return 0;
}
