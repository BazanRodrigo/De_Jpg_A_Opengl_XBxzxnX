import pygame
from pygame.locals import *

def ubication(position):
    if(position[0]>100 and position[0]<250):    #Lines
        return("glBegin(GL_LINES);")
    if(position[0]>300 and position[0]<450):    #Loop
        return("glBegin(GL_LINES_LOOP);")
    if(position[0]>500 and position[0]<650):    #STRIP
        return("glBegin(GL_LINES_POINT);")
    if(position[0]>700 and position[0]<850):    #POINT
        return("glBegin(GL_LINES_STRIP);")
    if(position[0]>900 and position[0]<1050):    #POINT
        return("---------------------------cambio---------------------------------")
    return ''

def main():
    print('Ingresa el nombre de tu imagen que esta en la carpteta Raiz con extension')
    #nameImage = input('Ejemplo: cabra.jpg\n')
    cabra = pygame.image.load('cabra.jpg')
    lines = pygame.image.load('lines.jpg')
    loop = pygame.image.load('loop.jpg')
    strip = pygame.image.load('strip.jpg')
    point = pygame.image.load('point.jpg')
    change = pygame.image.load('cambio.jpg')
    pygame.init()
    pygame.display.init()
    window = pygame.display.set_mode()
    window.fill((255,255,255))
    window.blit(cabra, (100,100))
    window.blit(lines, (100,800))
    window.blit(loop, (300,800))
    window.blit(point, (500,800))
    window.blit(strip, (700,800))
    window.blit(change, (900,800))
    height = cabra.get_height()
    width = cabra.get_width()
    pygame.display.flip()

    running = True
    print('Da clic a manera de calca en tu dibujo en los vertices')
    print('Copia y pega el siguiente codigo\n\n\n\n')
    dx = 0
    dy = 0
    ux = 0
    uy = 0
    RED = pygame.Color(255, 0, 0)
    while running:
        # Did the user click the window close button?
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
            if event.type == pygame.MOUSEBUTTONDOWN:
                down = pygame.mouse.get_pos()
                dx = down[0] + 600
                dy = down[1]
                x = (pygame.mouse.get_pos()[0]-100)
                y = height-(pygame.mouse.get_pos()[1]-100)
                if(dy>800 and dy<900):
                    if (ubication(pygame.mouse.get_pos()))!='':
                        print(ubication(pygame.mouse.get_pos()))
                    mood = False
                else:
                    print('glVertex2i(',x,',',y,');')
                    mood = True
            if event.type == pygame.MOUSEBUTTONUP:
                up = pygame.mouse.get_pos()
                ux = up[0]
                uy = up[1]
                ux = ux + 600
                uy = uy
                if mood:
                    pygame.draw.line(window, RED, (dx, dy), (ux, uy),10)
            pygame.display.flip()
    print('\n\n\n\nPorfa sigueme en mis redes sociales pq tengo poquitos seguidores')
    print('twitter: @BazanZuritaRodr')
    print('Instagram: zur1t4')
    print('Github: BazanRodrigo')


if __name__  == '__main__':
    main()
