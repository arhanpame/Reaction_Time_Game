# Reaction Time Game

A competitive two-player reaction time game built with Arduino. Test your reflexes against a friend—the first player to press their button after the red LED lights wins!

## How It Works

1. **Green LED + beep** (1 second) — Game is starting
2. **Yellow LED + beep** (1 second) — Get ready...
3. **Red LED + beep** (random 0.9–4.9 seconds) — Waiting phase
4. **Both white LEDs turn on** — GO! First person to press their button wins
5. **Buzzer sounds** — Winner is announced
6. **Reset** — Play again

## Components

- Arduino UNO (or compatible clone)
- 5× LEDs (1 green, 1 yellow, 1 red, 2 white)
- 2× Push buttons
- 1× Buzzer (passive or active)
- 5× 220Ω resistors (for LEDs)
- Breadboard
- Jumper wires
- USB cable for power/upload

## Pin Configuration

| Component | Arduino Pin |
|-----------|------------|
| Green LED | 11 |
| Yellow LED | 10 |
| Red LED | 9 |
| White LED 1 | 12 |
| White LED 2 | 8 |
| Buzzer | 7 |
| Button 1 | 13 |
| Button 2 | 6 |

## Wiring

Each LED connects through a 220Ω resistor to its pin and to GND.

**Buttons (important!):**
- Wire button pins with `INPUT_PULLUP` enabled
- One button leg → Arduino pin
- Other button leg → **GND rail**
- Do NOT connect directly to GND before the button—let the button be what connects them

## Getting Started

1. **Upload the code** to your Arduino via USB
2. **Wire components** to the breadboard following the pin configuration
3. **Power on** and press a button to start
4. First to react wins!

## Key Learnings

This project taught me about:
- **Button input logic** — The difference between floating pins and proper pull-up wiring
- **Timing and delays** — Coordinating LEDs, buzzers, and game state
- **Hardware debugging** — Troubleshooting `INPUT_PULLUP` circuits when buttons were reading incorrectly
- **Real-time interaction** — Building responsive circuits that react to user input

## What I'd Improve Next

- Add an LCD display to show reaction times in milliseconds
- Track wins/losses over multiple rounds
- Add difficulty levels (shorter random delays)
- Use a speaker instead of a buzzer for better sounds

## Files

- `reaction_time_game.ino` — Arduino sketch
- `wiring-diagram.png` — Photo of breadboard setup

## License

Feel free to use and modify for personal or educational use!
