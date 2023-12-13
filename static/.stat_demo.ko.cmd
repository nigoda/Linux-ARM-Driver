cmd_/static/stat_demo.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o /static/stat_demo.ko /static/stat_demo.o /static/stat_demo.mod.o;  true
