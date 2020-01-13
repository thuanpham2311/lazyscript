#!/bin/bash
# necessary
sudo apt-get install ttf-mscorefonts-installer tmux curl wget git fortune fish neofetch htop mpv gnome-tweaks cowsay trash-cli openssh-client openssh-server ibus-unikey flameshot audacity python3-pip python-pip tldr simplescreenrecorder net-tools npm nodejs nmap whois bucklespring libreoffice gconftool audacity gimp preload olive-editor krita xclip speedtest-cli mysql-server neovim fdfind aria2c -y
ibus restart

# chrome
wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb
sudo dpkg -i google-chrome-stable_current_amd64.deb
rm -rf google-chrome-stable_current_amd64.deb

# Python setup
sudo apt-get install -y python3-pandas
sudo apt-get install python3-matplotlib
sudo apt-get install python3-pygame
sudo pip install csvkit
sudo pip3 install notebook
sudo pip3 install pylint
sudo pip3 install numpy
sudo pip install opencv-python

# nvim setup
curl -fLo ~/.local/share/nvim/site/autoload/plug.vim --create-dirs \
	https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
nvim +{PlugInstall}

chsh -s "$(which fish)"
ssh-keygen
echo "
hide top bar extension
"
