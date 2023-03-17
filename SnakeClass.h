#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/System/Vector2.hpp>
#include <bits/stdc++.h>

enum Direction {
    LEFT,
    RIGHT,
    UP,
    DOWN,
    DEFAULT
};

class Snake {
public:
    void draw(sf:: RenderWindow &window);
    void logic(sf:: RenderWindow &window);
    sf:: Vector2f get_head_pos();
    void add_body();
    Snake();
    ~Snake();
private:
    int cur_x = 0, cur_y = 0;
    std:: vector<sf::CircleShape> head;
    std:: vector<sf::Vector2f> cur_coords;
    Direction dir;
    float vec_x, vec_y;
    void set_direction();
    bool is_int_coords();
    enum Direction check_keyboard_key();
    void init_head();
};
