import pygame
import numpy as np
import math

width = 800
heigth = 800
pygame.init()
window = pygame.display.set_mode((width, heigth), 0, 32)
pygame.display.set_caption('Bazanvertidor bezier2Opengl')

BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
BLUE = (0, 0, 255)
GREEN = (0, 255, 0)
RED = (255, 0, 0)
pts = []
knots = []
count = 0

def bezier():
    N = len(pts)
    n = N-1
    for t in np.arange(0, 1, 0.01):
        z = np.zeros(2)
        for i in range(N):
            z += np.dot((math.factorial(n)/(math.factorial(i)*math.factorial(n-i)))
                        *((1-t)**(n-i))*(t**i),pts[i])

        pygame.draw.circle(window, RED, z.astype(int), 3)

def main():
    pygame.init()
    pygame.display.init()
    window.fill((25, 35, 49))
    running = True
    while running:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
        pygame.display.flip()

#if __name__  == '__main__':
main()