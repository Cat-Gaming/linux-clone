# Linux Clone

this is a Linux Clone

# Prerequisites
Install qemu on debian based systems by:
```
sudo apt install qemu make
```
And by arch based systems by:
```
sudo pacman -S qemu-git make
```

# To Build
type:
for multithreading do:
```
make -j${nproc}
```
for singlethreaded building do:
```
make
```

# Running the Project
```
qemu-system-x86_64 -kernel linux.bin
```