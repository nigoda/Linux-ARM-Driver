cmd_/kern1/kern_demo.mod := printf '%s\n'   kern_demo.o | awk '!x[$$0]++ { print("/kern1/"$$0) }' > /kern1/kern_demo.mod
