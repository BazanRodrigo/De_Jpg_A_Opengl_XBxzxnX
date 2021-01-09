import pygame
from pygame.locals import *

def main():
    print('Ingresa el nombre de tu imagen que esta en la carpteta Raiz con extension')
    nameImage = input('Ejemplo: cabra.jpg')
    cabra = pygame.image.load('/',nameImage)
    wp = pygame.image.load('/WallpaperEtiqueta.jpg')
    pygame.init()
    pygame.display.init()
    window = pygame.display.set_mode()
    window.blit(wp, (0,0))
    window.blit(cabra, (100,100))
    height = cabra.get_height()
    width = cabra.get_width()
    pygame.display.flip()
    running = True
    print('Da clic a manera de calca en tu dibujo en los vertices')
    print('Copia y pega el siguiente codigo\n\n\n\n')
    while running:
        # Did the user click the window close button?
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
            if event.type == pygame.MOUSEBUTTONDOWN:
                x = width-(pygame.mouse.get_pos()[0]-100)
                y = height-(pygame.mouse.get_pos()[1]-100)
                print('glVertex2i(',x,',',y,');')
                pygame.display.flip()
    print('\n\n\n\nPorfa sigueme en mis redes sociales pq tengo poquitos seguidores')
    print('twitter: @BazanZuritaRodr')
    print('Instagram: zur1t4')
    print('Github: BazanRodrigo')


if __name__  == '__main__':
    main()
