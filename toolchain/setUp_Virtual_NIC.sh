sudo ip link add link ens33 address "00:11:22:33:44:55" ens33.1 type macvlan mode bridge
sudo ifconfig ens33.1 up
