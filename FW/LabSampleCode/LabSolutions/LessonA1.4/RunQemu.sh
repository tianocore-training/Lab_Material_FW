echo running qemu-system-x86_64 -pflash bios.bin -hda fat:rw:hda-contents -net none -debugcon file:debug.log -global isa-debugcon.iobase=0x402  -serial file:serial.log
qemu-system-x86_64  -pflash bios.bin -hda fat:rw:hda-contents -net none -debugcon file:debug.log -global isa-debugcon.iobase=0x402  -serial file:serial.log
#qemu-system-x86_64 -L .  -hda fat:rw:hda-contents -net none
