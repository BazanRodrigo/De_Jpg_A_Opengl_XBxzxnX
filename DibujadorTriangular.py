import pygame

print('Ingresa el nombre de tu imagen que esta en la carpteta Raiz con extension')
nameImage = input('Ejemplo: cabra.jpg\n')
imagen = pygame.image.load(nameImage)
window = pygame.display.set_mode()
mtriangulo = pygame.image.load('simple.png')
mstrip = pygame.image.load('strip.png')
mfan = pygame.image.load('fan.png')
lsimple = pygame.image.load('msimple.png')
lstrip = pygame.image.load('mstrip.png')
lfan = pygame.image.load('mfan.png')
change = pygame.image.load('cambio.jpg')
lineacolor = pygame.Color(52, 108, 117)
ultimacolor = pygame.Color(183, 221, 204)
grosor = 5
simple = False
strips = False
fan = False

def mood(position):
    if position[0]>100 and position[0]<250:    #simple
        window.blit(lsimple, (100,0))
        return("glBegin(GL_TRIANGLES);")
    if(position[0]>300 and position[0]<450):    #strip
        window.blit(lstrip, (100,0))
        return("glBegin(GL_TRIANGLE_STRIP);")
    if(position[0]>500 and position[0]<650):    #fan
        window.blit(lfan, (100,0))
        return("glBegin(GL_TRIANGLE_FAN);")
    if(position[0]>700 and position[0]<850):    #change
        return("//---------------------------cambio---------------------------------")
    return ''

def main():
    pygame.init()
    pygame.display.init()
    window.fill((25, 35, 49))
    window.blit(imagen, (100,100))
    window.blit(mtriangulo, (100,800))
    window.blit(mstrip, (300,800))
    window.blit(mfan, (500,800))
    window.blit(change, (700,800))
    running = True
    listaclics = [0,0] * 512
    height = imagen.get_height()
    nclics = 0
    puntos = 0
    while running:
        # Did the user click the window close button?
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
            if event.type == pygame.MOUSEBUTTONDOWN:
                position = pygame.mouse.get_pos()
                x = (position[0]-100)
                y = height-(position[1]-100)
                if(position[1]>800 and position[1]<900):
                    if position[0]>100 and position[0]<250:    #simple
                        nclics = 0
                        puntos = 0
                        window.blit(lsimple, (100,0))
                        print("glEnd();")
                        print("glBegin(GL_TRIANGLES);")
                        simple = True
                        strips = False
                        fan = False
                        continue
                    if(position[0]>300 and position[0]<450):    #strip
                        nclics = 0
                        puntos = 0
                        window.blit(lstrip, (100,0))
                        print("glEnd();")
                        print("glBegin(GL_TRIANGLE_STRIP);")
                        simple = False
                        strips = True
                        fan = False
                        continue
                    if(position[0]>500 and position[0]<650):    #fan
                        nclics = 0
                        puntos = 0
                        window.blit(lfan, (100,0))
                        print("glEnd();")
                        print("glBegin(GL_TRIANGLE_FAN);")
                        simple = False
                        strips = False
                        fan = True
                        continue
                    if(position[0]>700 and position[0]<850):    #change
                        print("//---------------------------cambio---------------------------------")
                        continue
                print('    glVertex2i(',x,',',y,');')
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
    print("glEnd();")
    print('\n\n\n\nPorfa sigueme en mis redes sociales pq tengo poquitos seguidores')
    print('twitter: @BazanZuritaRodr')
    print('Instagram: zur1t4')
    print('Github: BazanRodrigo')

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
