# dwmblocks
Modular status bar for <a href="https://dwm.suckless.org/">dwm</a> written in c.

# Installation
To use ```dwmblocks``` first run ```make``` and then install it with ```sudo make install```.
After that you can put dwmblocks in your ```xinitrc``` or other startup script to have it start with dwm.

# Patches
This build of ```dwmblocks``` utilizes scripts that have clicking functionality. <br> 
The <a href="https://dwm.suckless.org/patches/statuscmd/">patch for this</a> (```statuscmd```) is already built into this distribution, but you need to make sure that your build of ```dwm``` is also patched with it.<br>
Alternatively, you could use an already properly patched build of ```dwm```, like <a href="https://github.com/AM4283/dwm">mine</a>. <br>
Credit to Daniel Bylinka - <a href="mailto:daniel.bylinka@gmail.com">daniel.bylinka@gmail.com</a>

# Modifying Blocks
The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the ```blocks.h``` header file. <br>
By default the ```blocks.h``` header file is created the first time you run make which copies the default config from ```blocks.def.h```.
This is so you can edit your status bar commands and they will not get overwritten in a future update.


# My Build
My distribution of dwmblocks is configured to read my statusbar scripts found
in my <a href="https://github.com/AM4283/dotfiles/tree/master/.config/scripts/statusbar">dotfiles repo</a>. 
Make sure to add these scripts to your ```$PATH``` variable for them
to work correctly.  <br>

Some of these scripts also use nerd font symbols,
so make sure your build of dwm utilizes a nerd compatible font. I use
```nerd-fonts-noto-sans-regular-complete``` and ```noto-fonts-emoji``` for emoji
compatibility.

If a certain script does not work, read through it and make
sure you have all the programs required for it to work installed. 
In particular, all scripts that open a terminal when clicked define
the terminal to use as <a href="https://github.com/alacritty/alacritty">alacritty</a>, <br>
- ```sb-cpu``` and ```sb-mem``` open <a href="https://htop.dev/">htop</a> in a terminal when clicked <br>
- ```sb-backlight``` depends on <a href="https://github.com/haikarainen/light">light</a> and is configured to adjust brightness
on my nvidia optimus laptop <br>
- ```sb-bluetooth``` depends on <a href="https://archlinux.org/packages/extra/x86_64/bluez-utils/">bluez-utils</a> for functionality, and opens <a href="https://github.com/blueman-project/blueman">blueman</a> when clicked <br>
- ```sb-microphone``` and ```sb-pulsevol``` utilize <a href="https://github.com/cdemoulins/pamixer">pamixer</a> and open <a href="https://freedesktop.org/software/pulseaudio/pavucontrol/">pavucontrol</a> when clicked<br>
- ```sb-networkstatus``` opens ```nmtui``` in a terminal (part of <a href="https://networkmanager.dev/">networkmanager</a>) when clicked <br>
- ```sb-redshift``` depends on <a href="http://jonls.dk/redshift/">redshift</a> for bluelight dimming functionality
- ```sb-time``` opens <a href="https://dmedvinsky.github.io/gsimplecal/">gsimplecal</a> when clicked <br>
- ```switchoutput``` does not work on <a href="https://pipewire.org/">pipewire</a> installations (depends on ```pacmd``` from <a href="https://www.freedesktop.org/wiki/Software/PulseAudio/">pulseaudio</a>)

## Signaling Changes
The scripts used in this statusbar are able to use signals to be updated, instead of updating constantly every x seconds. The update signal for each statusbar module is defined in the last column of ```blocks.h```. <br>
For example, ```sb-pulsevol``` has an update signal of 2, so running ```pkill -RTMIN+2 dwmblocks``` will update this volume module since it does not update by itself.

Alternatively, running ```kill -36 $(pidof dwmblocks)``` would have the same effect in this scenario (add 34 to the signal number)

## Clickable Modules
The built in ```statuscmd``` patch linked above allows for click/scroll actions on each module. See my statusbar scripts linked in my dotfiles repo for examples of me utilizing the ```$BLOCK_BUTTON``` variable to achieve this.

### Other Links
Some of my other configurations for programs including scripts needed for parts of this build of dwmblocks can be found on my GitHub:

- <a href="https://github.com/AM4283/dotfiles" target="_blank">dotfiles/scripts</a>
- <a href="https://github.com/AM4283/dwm" target="_blank">dwm</a>
- <a href="https://github.com/AM4283/st" target="_blank">st</a>

Use these builds along with my dotfiles to get (almost) my exact desktop!

### Donate
If you enjoy this build, or any of my other dots on my GitHub and are feeling extra generous, you can donate crypto using the addresses below:

**XMR**<br>
48bMjDgejjBa5JMLmUXWHfUxxc4VztE9dSxsnJ5STqDcUcjYk9xHoK59ovWgm6BvrzFfbx2kEA3QyUmgcpzYJ4dH9cLWCYV

**Bitcoin**<br>
bc1quaj9206k2ughk8ryh7yq2vqa0esxpkt048ggpx


**Ethereum**<br>
0x5f954056E04a5fc0F0E777409935823e98dC0C83

Make sure to give back to the creators of your favorite FOSS programs too!
