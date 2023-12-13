cmd_/dynamic/dyn_demo.mod := printf '%s\n'   dyn_demo.o | awk '!x[$$0]++ { print("/dynamic/"$$0) }' > /dynamic/dyn_demo.mod
