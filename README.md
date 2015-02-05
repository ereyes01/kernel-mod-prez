# Linux Kernel Modules Presentation

This repository contains the code from the [presentation](http://www.slideshare.net/ereyes01/linux-kernel-modules) I gave at the [Linux Meetup](http://www.meetup.com/linux-85/events/185946802/) on February 4, 2015.

There are two modules in this repository:

- hello-mod
  - A simple hello-world kernel module

- char-mod
  - A simple character device driver that emits a message when read from

As discussed in the presentation, char-mod has some serialization bugs that may show themselves when multiple processes are using the device file at the same time, or when the device file is being used while the module is being unloaded. See if you can reproduce and fix them!
