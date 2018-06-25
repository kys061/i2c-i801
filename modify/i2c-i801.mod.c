#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2b22e0c3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xbc3abb13, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x62d3fd3f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x2a303d4d, __VMLINUX_SYMBOL_STR(check_signature) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x56947347, __VMLINUX_SYMBOL_STR(dmi_walk) },
	{ 0xe13cd8a7, __VMLINUX_SYMBOL_STR(dmi_name_in_vendors) },
	{ 0x6ec2c14b, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8028e5a5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x89503906, __VMLINUX_SYMBOL_STR(pci_request_region) },
	{ 0xaea976a8, __VMLINUX_SYMBOL_STR(acpi_check_resource_conflict) },
	{ 0xee7ad01b, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x50877b9, __VMLINUX_SYMBOL_STR(dmi_first_match) },
	{ 0xace1a41b, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb153f6c5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2b056eed, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbe76407c, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x19d571a7, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdc69ab39, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xbc7cb20d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x5721e571, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x4ec76535, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xac05c45d, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3ef51793, __VMLINUX_SYMBOL_STR(pci_release_region) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x6963a3dc, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x42dbe396, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x3b1ae3d1, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x20755493, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x8acdd5c3, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xdc0accc3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe80ed784, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x7290819b, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x2c532a8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00002413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002423sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002483sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000283Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002930sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D71sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D72sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F3Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000023B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A123sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9DC46E34B53EFC06962B895");
