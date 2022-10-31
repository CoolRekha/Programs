#install the required package
!pip install speedtest-cli
import speedtest

speed_test = speedtest.Speedtest()

def bytes_to_mb(bytes):
  KB = 1024 #One kilobyte is 1024 bytes
  MB = KB * 1024 # One MB is 1024KB
  return int(bytes/MB)

download_speed = bytes_to_mb(speed_test.download())
print ("Your Download speed is ", download_speed, "MB" )
