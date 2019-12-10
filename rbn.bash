gnome-terminal

sudo apt-get update
sudo apt-get upgrade -y
sudo apt-get autoremove -y
sudo apt-get autoclean
sudo apt-get clean
nvim -c "PlugUpdate | qa"
notify-send -i ~/git/lazyscript/icon/update.png "fresh"

pactl set-card-profile 0 output:hdmi-stereo
