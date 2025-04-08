#!/system/bin/sh
# Checking ID shell
if [ "$(id -u)" -ne 2000 ]; then
    echo "[ Error |@UnixeID(Yeye)]"
    exit 1
fi
# Smart Notification
shell() {
    sor="$1"
    cmd notification post -S bigtext -t '♨️ Encore Setup' 'Tag' "$sor" > /dev/null 2>&1
}
# Style display Terminal
    echo
    echo "     ☆================================☆"
    echo
    echo "       ~ Description. Encore Setup.... "
    echo
    echo "       - Author                 :  @UnixeID"
    echo "       - Point                    :  1.0 [ Kernel Custem ]"
    echo "       - Release               :  0i - April - 2025"
    echo "       - Name Shell         :  Encore Setup"
    echo
    echo "    |_______________________________________|"
    echo "    \______________________________________/"
    echo
    echo "   Priority Neslet Setup Mode Custem. "
    sleep 2
    echo
    echo
     rm -rf /data/local/tmp/*
     cp /sdcard/Kernel/src /data/local/tmp 
     chmod +x /data/local/tmp/src
     if [ "$1" = "-O" ]; then
          shell "Applying Mobile Legends optimization profile. Please wait 1-6 seconds..."
          /data/local/tmp/src -O
     elif [ "$1" = "-B" ]; then
          shell "Applying PUBG Mobile performance profile. Please wait 1-4 seconds..."
          /data/local/tmp/src -B
     elif [ "$1" = "-P" ]; then
          shell "Applying Genshin Impact high-performance profile. Please wait 1-3 seconds..."
          /data/local/tmp/src -P
     elif [ "$1" = "-C" ]; then
           shell "Clearing cache and stopping background services. Please wait 1-3 seconds..."
           /data/local/tmp/src -C
     elif [ "$1" = "-L" ]; then
           shell "Applying Universal system performance profile. Please wait 1-3 seconds..."
           /data/local/tmp/src -L
     elif [ "$1" = "-h" ] || [ "$1" = "--help" ]; then
           /data/local/tmp/src --help
        else
          printf "Failed to apply requested profile. Unknown option: %s\n" "$1"
         fi