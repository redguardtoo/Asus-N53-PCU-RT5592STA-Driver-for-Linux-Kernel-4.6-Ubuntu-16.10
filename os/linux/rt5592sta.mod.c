#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x8a889816, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x157c4c1a, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0x122e6e41, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0xc0430403, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0xa63e0bb3, __VMLINUX_SYMBOL_STR(pci_write_config_word) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdbb6afc2, __VMLINUX_SYMBOL_STR(pci_read_config_byte) },
	{ 0xc29bf967, __VMLINUX_SYMBOL_STR(strspn) },
	{ 0x2adcfc6d, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0xb075141, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xe9e23a34, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb4ee6bde, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc2e5a3e7, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x72c65d92, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xbc2b51be, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x2c4c40de, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x50a7f372, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x45bb6359, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9c286d84, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x71acd3bf, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x6eccd80, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x42fd6e54, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xf26bc4c1, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x2f8054eb, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xaca8040e, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x1022d3c2, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x28db21d3, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x79376737, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x4e195022, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xb1c378eb, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xaba17c5c, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x505a833d, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xb0fdcbdc, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf477ad46, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x6a91d962, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xa5c8069c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xe2ea100d, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xf9fbf117, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xd954433f, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xfb3c62ab, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x960fd9e2, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x33cf249d, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x8b4a3b1d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xe865bc36, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x80b68a68, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xe6382f03, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xdca9939b, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8d15114a, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x54fb6329, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x95d00eb6, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa722b07b, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xcbcf5a96, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xbc55eae9, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x93b9d9c2, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xae6c1f27, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xbd55ddd3, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xc68f5b0d, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xa72acb0e, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x54c3ddaf, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x45bcdfbd, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x4ee8c21c, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001814d00005592sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0E56138620B7F4B5081B53C");
