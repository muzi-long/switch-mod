#include <switch.h>

SWITCH_MODULE_LOAD_FUNCTION(mod_test_load);

SWITCH_MODULE_SHUTDOWN_FUNCTION(mod_test_shutdown);

SWITCH_MODULE_DEFINITION(mod_test, mod_test_load, mod_test_shutdown, NULL);

SWITCH_MODULE_LOAD_FUNCTION(mod_test_load) {
    *module_interface = switch_loadable_module_create_module_interface(pool, modname);
    return SWITCH_STATUS_SUCCESS;
}

SWITCH_MODULE_SHUTDOWN_FUNCTION(mod_test_shutdown) {
    return SWITCH_STATUS_SUCCESS;
}