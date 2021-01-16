import pygame

window = pygame.display.set_mode()
mlines = pygame.image.load('moodlines.jpg')
mloop = pygame.image.load('moodloop.jpg')
mpoint = pygame.image.load('moodpoint.jpg')
mstrip = pygame.image.load('moodstrip.jpg')
lineacolor = pygame.Color(52, 108, 117)
ultimacolor = pygame.Color(183, 221, 204)
grosor = 5

def ubication(position):
    if(position[0]>100 and position[0]<250):    #Lines
        window.blit(mlines, (100,0))
        return("glBegin(GL_LINES);")
    if(position[0]>300 and position[0]<450):    #Loop
        window.blit(mloop, (100,0))
        return("glBegin(GL_LINE_LOOP);")
    if(position[0]>500 and position[0]<650):    #POINT
        window.blit(mpoint, (100,0))
        return("glBegin(GL_LINE_POINT);")
    if(position[0]>700 and position[0]<850):    #STRIP
        window.blit(mstrip, (100,0))
        return("glBegin(GL_LINE_STRIP);")
    if(position[0]>900 and position[0]<1050):    #change
        return("---------------------------cambio---------------------------------")
    return ''

def main():
    pygame.init()
    pygame.display.init()
    window.fill((25, 35, 49))
    running = True
    listaclics = [0,0] * 512
    nclics = 0
    puntos = 0
    simple = False
    strips = True
    fan = False
    while running:
        # Did the user click the window close button?
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
            if event.type == pygame.MOUSEBUTTONDOWN:
                listaclics[nclics] = pygame.mouse.get_pos()
                nclics = nclics + 1
                puntos = puntos + 1
                if simple and puntos == 3:
                    puntos = trianguloSimple(listaclics, nclics, puntos)
                if strips:
                    trianguloStrips(listaclics, nclics)
                if fan:
                    trianguloFan(listaclics, nclics)



            pygame.display.flip()
    print(nclics)
    print(listaclics)

def trianguloSimple(listaclics, n, puntos):
    pygame.draw.line(window, lineacolor, listaclics[n-3], listaclics[n-1],grosor)
    pygame.draw.line(window, lineacolor, listaclics[n-1], listaclics[n-2],grosor)
    pygame.draw.line(window, lineacolor, listaclics[n-2], listaclics[n-3],grosor)
    puntos = 0
    return puntos



def trianguloStrips(listaclics, n):
    if n > 2 :
        pygame.draw.line(window, lineacolor, listaclics[n-3], listaclics[n-1],grosor)
        pygame.draw.line(window, ultimacolor, listaclics[n-1], listaclics[n-2],grosor)
        pygame.draw.line(window, lineacolor, listaclics[n-2], listaclics[n-3],grosor)


def trianguloFan(listaclics, n):
    if n > 2 :
        pygame.draw.line(window, lineacolor, listaclics[0], listaclics[n-2],grosor)
        pygame.draw.line(window, lineacolor, listaclics[n-2], listaclics[n-1],grosor)
        pygame.draw.line(window, lineacolor, listaclics[n-1], listaclics[0],grosor)


if __name__  == '__main__':
    main()