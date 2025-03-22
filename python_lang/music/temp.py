# Let's try to play some doraemon songs 
# import os
# # play sound
# file = "/home/mayank/ubuntu_folders/repos/learning-repos/python_lang/music/Doraemon.mp3"
# print('playing sound using native player')
# os.system("explorer.exe $(wslpath -w " + file+")")


import pygame 
import time
pygame.mixer.init()
pygame.mixer.music.load("/home/mayank/ubuntu_folders/repos/learning-repos/python_lang/music/Doraemon.mp3")
pygame.mixer.music.play()
while pygame.mixer.music.get_busy():
    time.sleep(1)