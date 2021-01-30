/*
** EPITECH PROJECT, 2021
** GLOBAS_GAME_JAM_2021
** File description:
** init_map
*/

#include "../../inc/my.h"

t_game init_sprite_map(t_game s_game)
{   
    s_game.s_ciel = sfSprite_create();
    s_game.s_batiment = sfSprite_create();
    s_game.s_sol = sfSprite_create();
    //PERSO
    s_game.sperso = sfSprite_create();
    //MEMORY
    s_game.shappy = sfSprite_create();
    s_game.ssad = sfSprite_create();

    //PAUSE
    s_game.s_pause = sfSprite_create();
    s_game.s_pause_play = sfSprite_create();
    s_game.s_pause_quit = sfSprite_create();
    s_game.s_pause_replay = sfSprite_create();

    return (s_game);
}

t_game init_texture_map(t_game s_game) 
{

    s_game.t_ciel = sfTexture_createFromFile("ressources/img/map/ciel.png", NULL);
    sfSprite_setTexture(s_game.s_ciel, s_game.t_ciel, sfTrue);
    s_game.t_batiment = sfTexture_createFromFile("ressources/img/map/batiment.png", NULL);
    sfSprite_setTexture(s_game.s_batiment, s_game.t_batiment, sfTrue);
    s_game.t_sol = sfTexture_createFromFile("ressources/img/map/sol.png", NULL);
    sfSprite_setTexture(s_game.s_sol, s_game.t_sol, sfTrue);
    //PERSO
    s_game.tperso = sfTexture_createFromFile("ressources/img/map/perso.png", NULL);
    sfSprite_setTexture(s_game.sperso, s_game.tperso, sfTrue);
    //MEMORY
    s_game.thappy = sfTexture_createFromFile("ressources/img/map/happy.png", NULL);
    sfSprite_setTexture(s_game.shappy, s_game.thappy, sfTrue);
    s_game.tsad = sfTexture_createFromFile("ressources/img/map/sad.png", NULL);
    sfSprite_setTexture(s_game.ssad, s_game.tsad, sfTrue);
    //PAUSE
    s_game.t_pause = sfTexture_createFromFile("ressources/img/pause/pause.png", NULL);
    sfSprite_setTexture(s_game.s_pause, s_game.t_pause, sfTrue);
    s_game.t_pause_play = sfTexture_createFromFile("ressources/img/menu/play.png", NULL);
    sfSprite_setTexture(s_game.s_pause_play, s_game.t_pause_play, sfTrue);
    s_game.t_pause_quit = sfTexture_createFromFile("ressources/img/menu/quit.png", NULL);
    sfSprite_setTexture(s_game.s_pause_quit, s_game.t_pause_quit, sfTrue);
    s_game.t_pause_replay = sfTexture_createFromFile("ressources/img/menu/replay.png", NULL);
    sfSprite_setTexture(s_game.s_pause_replay, s_game.t_pause_replay, sfTrue);

    return (s_game);
}


t_game init_pos_map(t_game s_game)
{
    s_game.pos_ciel = fc_pos(0,0);
    sfSprite_setPosition(s_game.s_ciel, s_game.pos_ciel);
    s_game.pos_batiment = fc_pos(0,0);
    sfSprite_setPosition(s_game.s_batiment, s_game.pos_batiment);
    s_game.pos_sol = fc_pos(0,30);
    sfSprite_setPosition(s_game.s_sol, s_game.pos_sol);
    //PERSO
    s_game.posperso = fc_pos(60,700);
    sfSprite_setPosition(s_game.sperso, s_game.posperso);
    //MEMORY
    s_game.poshappy = fc_pos(0,0);
    sfSprite_setPosition(s_game.shappy, s_game.poshappy);
    s_game.possad = fc_pos(100,0);
    sfSprite_setPosition(s_game.ssad, s_game.possad);
    //PAUSE
    s_game.pos_pause = fc_pos(0,0);
    sfSprite_setPosition(s_game.s_pause, s_game.pos_pause);
    s_game.pos_pause_play = fc_pos(650,330);
    sfSprite_setPosition(s_game.s_pause_play, s_game.pos_pause_play);
    s_game.pos_pause_quit = fc_pos(650,600);
    sfSprite_setPosition(s_game.s_pause_quit, s_game.pos_pause_quit);
    s_game.pos_pause_replay = fc_pos(650,470);
    sfSprite_setPosition(s_game.s_pause_replay, s_game.pos_pause_replay);

    return (s_game);
} 

void draw_sprite_map(t_game s_game)
{
    if(s_game.check_pause == 0) {
        sfRenderWindow_drawSprite(s_game.window, s_game.s_ciel, NULL);
        sfRenderWindow_drawSprite(s_game.window, s_game.s_batiment, NULL);
        sfRenderWindow_drawSprite(s_game.window, s_game.s_sol, NULL);
        sfRenderWindow_drawSprite(s_game.window, s_game.sperso, NULL);
        sfRenderWindow_drawSprite(s_game.window, s_game.shappy, NULL);
        sfRenderWindow_drawSprite(s_game.window, s_game.ssad, NULL);

    } else if (s_game.check_pause == 1) {
        sfRenderWindow_clear(s_game.window, sfBlack);
        sfRenderWindow_drawSprite(s_game.window, s_game.s_ciel, NULL);
        sfRenderWindow_drawSprite(s_game.window, s_game.s_batiment, NULL);
        sfRenderWindow_drawSprite(s_game.window, s_game.s_sol, NULL);
        sfRenderWindow_drawSprite(s_game.window, s_game.s_pause, NULL);
        sfRenderWindow_drawSprite(s_game.window, s_game.s_pause_play, NULL);
        sfRenderWindow_drawSprite(s_game.window, s_game.s_pause_quit, NULL);
        sfRenderWindow_drawSprite(s_game.window, s_game.s_pause_replay, NULL);
    }
}

t_game init_rect_map(t_game s_game)
{   
    s_game.rect_perso = fc_rect(0,0,147,170);

    s_game.rect_pause_play = fc_rect(0, 0, 300, 80);
    sfSprite_setTextureRect(s_game.s_pause_play, s_game.rect_pause_play);
    s_game.rect_pause_quit = fc_rect(0, 0, 300, 80);
    sfSprite_setTextureRect(s_game.s_pause_quit, s_game.rect_pause_quit);
    s_game.rect_pause_replay = fc_rect(0, 0, 300, 80);
    sfSprite_setTextureRect(s_game.s_pause_replay, s_game.rect_pause_replay);

    return (s_game);
}


t_game init_map(t_game s_game, t_window s_window)
{
    s_game.clock_jump = sfClock_create();
    s_game.ct_jump = 1;

    s_game.check_pause = 0;
    s_game.window = s_window.window;
    s_game.posmouse = s_window.posmouse;
    s_game.event = s_window.event;
    s_game = init_sprite_map(s_game);
    s_game = init_texture_map(s_game);
    s_game = init_pos_map(s_game);
    s_game = init_rect_map(s_game);
    s_game.timer_perso = sfClock_create();

    
    return (s_game);
}