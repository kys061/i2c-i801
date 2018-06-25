This is an how to change i2c-i801 for ubuntu14.04.00 to ubuntu14.04.01~05
=============
Delete original drivers
1. lsmod|grep -i i2c   
2. rmmod i2c-i801

Backup for original i2c-i801
1. cd /lib/modules/3.13.0-24-generic/kernel/drivers/i2c/busses/
2. mv i2c-i801.ko i2c-i801.ko.bak

Change original i2c-i801 to modified i2c-i801
1. cp /home/saisei/modify/i2c-i801.ko .
2. depmod -a
3. reboot

After rebooting, load the driver
1. modprobe i2c-i801

Confirm the module info
1. modinfo i2c-i801

