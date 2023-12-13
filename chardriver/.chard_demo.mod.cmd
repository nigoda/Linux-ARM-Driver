cmd_/chardriver/chard_demo.mod := printf '%s\n'   chard_demo.o | awk '!x[$$0]++ { print("/chardriver/"$$0) }' > /chardriver/chard_demo.mod
