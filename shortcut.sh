#!/usr/bin/env bash
# switch Audio To HDMI
pactl set-card-profile 0 output:hdmi-stereo
# switch Audio To Laptop
pactl set-card-profile 0 output:analog-stereo
