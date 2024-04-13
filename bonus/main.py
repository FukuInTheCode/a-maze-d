import sys
import pygame


def main(argv: list[str]):
    user_inputs = []
    x_y = []
    new = []
    for line in sys.stdin:
        user_inputs.append(line.strip())
    nbr_robot = user_inputs[1]
    pygame.init()
    WIDTH, HEIGHT = 800, 600
    screen = pygame.display.set_mode((WIDTH, HEIGHT))
    running = True
    for arbs in user_inputs:
        if len(arbs) == 5 and arbs != "##end":
            x_y.append(arbs[2])
            x_y.append(arbs[4])
            #print(arbs)
            #print(x_y)
    for i in range(0, len(x_y), 2):
        x = float(x_y[i]) + 100
        y = float(x_y[i + 1]) + 100
        new.append((x, y))
    zoom_factor = 2
    print(new)
    while running:
        for event in pygame.event.get():
            if event.type == pygame.QUIT or (event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE):
                running = False
        screen.fill("Black")
        for newb in new:
            pygame.draw.circle(screen, "RED", (newb[0] * zoom_factor, newb[1] * zoom_factor), 5 * zoom_factor)
        pygame.display.flip()
    pygame.quit()
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))