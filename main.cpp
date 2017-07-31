#include <SFML/Graphics.hpp>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // define a triangle
        sf::CircleShape triangle(80, 3);

// define a square
        sf::CircleShape square(80, 4);

// define an octagon
        sf::CircleShape octagon(80, 8);
        window.draw(triangle);

        // end the current frame
        window.display();
    }

    return 0;
}