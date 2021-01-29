/*
** EPITECH PROJECT, 2021
**
** File description:
** main.c
*/

#include "../../inc/my.h"

t_window click_menu_play(t_window s_window)
{
    if ((s_window.posmouse.x >= s_window.posplay.x) && (s_window.posmouse.x <= s_window.posplay.x + 300) && \
    (s_window.posmouse.y >= s_window.posplay.y) && (s_window.posmouse.y <= s_window.posplay.y + 90)) { 
        s_window.rect_play.top = 82;
    } else
        s_window.rect_play.top = 0;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (s_window.posmouse.x >= s_window.posplay.x && s_window.posmouse.x <= s_window.posplay.x + 300 \
            && s_window.posmouse.y >= s_window.posplay.y && s_window.posmouse.y <= s_window.posplay.y + 90) {
            //map(s_window);
            printf("play : on\n");
        }
    }
    return (s_window);
}

t_window click_menu_quit(t_window s_window)
{
    if (s_window.posmouse.x >= s_window.posquit.x && s_window.posmouse.x <= s_window.posquit.x + 300 \
                && s_window.posmouse.y >= s_window.posquit.y && s_window.posmouse.y <= s_window.posquit.y + 90) {
                s_window.rect_quit.top = 82;
    } else
        s_window.rect_quit.top = 0;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (s_window.posmouse.x >= s_window.posquit.x && s_window.posmouse.x <= s_window.posquit.x + 300 \
        && s_window.posmouse.y >= s_window.posquit.y && s_window.posmouse.y <= s_window.posquit.y + 95) {
            close_window(s_window.window, s_window.event);
        }
    }
    return (s_window);
}