import pygame
import sys
from pygame.locals import *
# Aqui ingresa el nombre la las ranas
imagen = pygame.image.load('perfil.jpg')# La rana que esta de perfil
frente = pygame.image.load('frente.jpg')# La rana que esta de frente

anchofrente = frente.get_width()

window = pygame.display.set_mode()
mtriangulo = pygame.image.load('simple.png')
mstrip = pygame.image.load('strip.png')
mfan = pygame.image.load('fan.png')
lsimple = pygame.image.load('msimple.png')
lstrip = pygame.image.load('mstrip.png')
lfan = pygame.image.load('mfan.png')
change = pygame.image.load('cambio.jpg')
lineacolor = pygame.Color(255, 0, 0)
ultimacolor = pygame.Color(183, 221, 204)
grosor = 1
simple = False
strips = False
fan = False

def mood(position):
    if position[0]>100 and position[0]<250:    #simple
        window.blit(lsimple, (100,0))
        return("glBegin(GL_TRIANGLES)\nglColor3f(t(),t(),t());")
    if(position[0]>300 and position[0]<450):    #strip
        window.blit(lstrip, (100,0))
        return("glBegin(GL_TRIANGLE_STRIP)\nglColor3f(t(),t(),t());")
    if(position[0]>500 and position[0]<650):    #fan
        window.blit(lfan, (100,0))
        return("glBegin(GL_TRIANGLE_FAN);\nglColor3f(t(),t(),t());")
    if(position[0]>700 and position[0]<850):    #change
        return("//---------------------------cambio---------------------------------")
    return ''

def main():
    pygame.init()
    pygame.display.init()
    pygame.display.set_caption("Hackerman es bazan")
    window.fill((25, 35, 49))
    window.blit(imagen, (100,100))
    window.blit(frente, (700,100))
    window.blit(mtriangulo, (100,900))
    window.blit(mstrip, (300,900))
    window.blit(mfan, (500,900))
    window.blit(change, (700,900))
    fuente = pygame.font.Font(None, 20)
    m1 = fuente.render('Punto 1', 1, (255, 255, 255))
    m2 = fuente.render('Punto 2', 1, (255, 255, 255))
    m3 = fuente.render('Punto 3', 1, (255, 255, 255))
    pygame.draw.rect(window,(199, 0, 57),[100,700,150,75],0)
    running = True
    listaclics = [0,0] * 512
    height = imagen.get_height()
    nclics = 0
    numclics = 0
    puntos = 0
    vertice = 0
    xanterior = 0
    while running:
        # Did the user click the window close button?
        for event in pygame.event.get():
            teclado=pygame.key.get_pressed()
            if teclado[K_t]:
                nclics = 0
                puntos = 0
                numclics = 0
                window.blit(lsimple, (100,0))
                print("glEnd();")
                print("glBegin(GL_TRIANGLES);")
                simple = True
                strips = False
                fan = False
                break
            if teclado[K_s]:
                nclics = 0
                puntos = 0
                numclics = 0
                window.blit(lstrip, (100,0))
                print("glEnd();")
                print("glBegin(GL_TRIANGLE_STRIP);")
                simple = False
                strips = True
                fan = False
                break
            if teclado[K_f]:
                nclics = 0
                puntos = 0
                numclics = 0
                window.blit(lfan, (100,0))
                print("glEnd();")
                print("glBegin(GL_TRIANGLE_FAN);")
                simple = False
                strips = False
                fan = True
                break
            if teclado[K_c]:
                print("//---------------------------cambio---------------------------------")
                break
            if event.type == pygame.QUIT:
                running = False
            if event.type == pygame.MOUSEBUTTONDOWN:
                position = pygame.mouse.get_pos()
                x = (position[0]-100)
                y = height-(position[1]-100)
                if (numclics+1)%2==0:
                    z = abs((700+anchofrente)-(x+100))
                    print('    glVertex3i(',xanterior,',',y,',',z,');')
                    numclics = numclics + 1
                    vertice += 1
                    if vertice == 1:
                        pygame.draw.rect(window,(199, 0, 57),[100,700,150,75],0)
                        window.blit(m1,(100,700))
                        pygame.display.flip()
                    if vertice == 2:
                        pygame.draw.rect(window,(199, 0, 57),[100,700,150,75],0)
                        window.blit(m2,(100,700))
                        pygame.display.flip()
                    if vertice == 3:
                        pygame.draw.rect(window,(199, 0, 57),[100,700,150,75],0)
                        window.blit(m3,(100,700))
                        pygame.display.flip()
                        vertice=0
                    break
                else:
                    xanterior = x
                listaclics[nclics] = pygame.mouse.get_pos()
                nclics = nclics + 1
                numclics = numclics + 1
                puntos = puntos + 1
                if simple and puntos == 3:
                    puntos = trianguloSimple(listaclics, nclics)
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

def trianguloSimple(listaclics, n):
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
