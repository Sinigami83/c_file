#include <curses.h>
#include <unistd.h>

enum { delay_duration = 100 };
enum { key_escape = 27 };

struct star {
    int cur_x;  /* текущее положение по горизонтали */
    int cur_y;  /* текущее положение по вертикали */
    int max_x;  /* максимальный предел терминала по горизонтали */
    int max_y;  /* максимальный предел терминала по вертикали */
};

void initial_state(struct star *s, int x, int y) /* начальное состояние */
{
    /*int walls[s->max_x][s->max_y];
    int i, j;
    for (i = 0; i <= s->max_x ;++i)
        for (j = 0; j <= s->max_y ;++j) {
            walls[i][j] = '2';
        }

    for (i = 0; i <= s->max_x ;++i)
        for (j = 0; j <= s->max_y ;++j) {
            move(j, i);
            addch(walls[i][j]);
            refresh();
        }*/

    s->cur_x = x/2; 
    s->cur_y = y-1;

    move(s->cur_y, s->cur_x);
    addch('*');
    refresh();


}

void clean_line(struct star *s)
{
    move(s->cur_y, s->cur_x);
    addch(' ');
    refresh();
}

void paint_move_star(struct star *s)
{
    move(s->cur_y, s->cur_x);
    addch('*');
    refresh();
}

void max_facet(struct star *s)
{
    if (s->cur_x >= s->max_x) {
        s->cur_x = s->max_x - 1;
    } else {
        if (s->cur_x < 0) {
            s->cur_x = 0;
        }
    }

    if (s->cur_y >= s->max_y) {
        s->cur_y = s->max_y - 1;
    } else {
        if (s->cur_y < 0) {
            s->cur_y = 0;
        }
    }

}

void move_star(struct star *s, int x, int y)
{
    clean_line(s);
    s->cur_x += x; 
    s->cur_y += y;
    max_facet(s);
    paint_move_star(s);
}

int main()
{
    int ord_x, ord_y, key;
    struct star s;

    timeout(delay_duration); /* эта функция нам понадобится, 
    когда будет делать функцию автоматической езды без ошибания наших действий */
    
    initscr(); /* вызвали библиотеку*/ 
    curs_set(0); /* скрыть курсив клавиатуры */
    cbreak(); /* введеный символ доступен сразу же после ввода */
    keypad(stdscr, 1); /* обработка escape поседовательности */ 
    noecho(); /* скрыть отображение введенного символа */
    
    getmaxyx(stdscr, ord_y, ord_x); /* узнать высату и ширину экрана*/
    s.max_x = ord_x;
    s.max_y = ord_y;
    initial_state(&s, ord_x, ord_y);

    while((key = getch())!= key_escape) {
        switch(key) {
            case KEY_UP:
                move_star(&s, 0, -1);
                break;
            case KEY_DOWN:
                move_star(&s, 0, 1);
                break;
            case KEY_LEFT:
                move_star(&s, -1, 0);
                break;
            case KEY_RIGHT:
                move_star(&s, 1, 0);
                break;
            case KEY_RESIZE: /* передает значение если размер экрана 
                                изменился*/
                //handle_resize(&x, &y, &max_x, &max_y);
                break;
        }
    }
    endwin();
    return 0;
}