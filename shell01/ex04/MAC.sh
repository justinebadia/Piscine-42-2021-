ifconfig | grep ether | sed 's/ether//' | sed -E 's/[[:space:]]//g'
