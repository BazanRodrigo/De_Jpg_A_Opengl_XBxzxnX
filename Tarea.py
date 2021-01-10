import pygame

window = pygame.display.set_mode()
mlines = pygame.image.load('moodlines.jpg')
mloop = pygame.image.load('moodloop.jpg')
mpoint = pygame.image.load('moodpoint.jpg')
mstrip = pygame.image.load('moodstrip.jpg')

def ubication(position):
    if(position[0]>100 and position[0]<250):    #Lines
        window.blit(mlines, (100,0))
        return("glEnd();\nglBegin(GL_LINES);")
    if(position[0]>300 and position[0]<450):    #Loop
        window.blit(mloop, (100,0))
        return("glEnd();\nglBegin(GL_LINE_LOOP);")
    if(position[0]>500 and position[0]<650):    #POINT
        window.blit(mpoint, (100,0))
        return("glEnd();\nglBegin(GL_LINE_POINT);")
    if(position[0]>700 and position[0]<850):    #STRIP
        window.blit(mstrip, (100,0))
        return("glEnd();\nglBegin(GL_LINE_STRIP);")
    if(position[0]>900 and position[0]<1050):    #change
        return("---------------------------cambio---------------------------------")
    return ''

def main():
    print('Ingresa el nombre de tu imagen que esta en la carpteta Raiz con extension')
    nameImage = input('Ejemplo: cabra.jpg\n')
    image = pygame.image.load(nameImage)
    lines = pygame.image.load('lines.jpg')
    loop = pygame.image.load('loop.jpg')
    strip = pygame.image.load('strip.jpg')
    point = pygame.image.load('point.jpg')
    change = pygame.image.load('cambio.jpg')
    height = image.get_height()
    width = image.get_width()    
    width = int(width*(0.43))
    cabra = pygame.transform.scale(image,(600,width))
    pygame.init()
    pygame.display.init()
    window.fill((199, 0, 57 ))
    window.blit(cabra, (100,100))
    window.blit(lines, (100,800))
    window.blit(loop, (300,800))
    window.blit(point, (500,800))
    window.blit(strip, (700,800))
    window.blit(change, (900,800))
    print(height, width)
    pygame.display.flip()
    running = True
    print('Da clic a manera de calca en tu dibujo en los vertices')
    print('Copia y pega el siguiente codigo\n\n\n\n')
    dx = 0
    dy = 0
    ux = 0
    uy = 0
    RED = pygame.Color(218, 247, 166)
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
                        pygame.display.flip()
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
                    pygame.draw.line(window, RED, (dx, dy), (ux, uy),2)
            pygame.display.flip()
    print('\n\n\n\nPorfa sigueme en mis redes sociales pq tengo poquitos seguidores')
    print('twitter: @BazanZuritaRodr')
    print('Instagram: zur1t4')
    print('Github: BazanRodrigo')


if __name__  == '__main__':
    main()
