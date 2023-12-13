cmd_/chardriver/chard_demo.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o /chardriver/chard_demo.ko /chardriver/chard_demo.o /chardriver/chard_demo.mod.o;  true
