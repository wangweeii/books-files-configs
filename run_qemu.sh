#!/usr/bin/bash
qemu-system-x86_64 -s -S -kernel arch/x86/boot/bzImage -nographic -m 512M -append "console=ttyS0"
