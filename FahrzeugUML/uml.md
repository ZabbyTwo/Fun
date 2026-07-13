```mermaid
classDiagram
    class Fahrzeug {
        #int geschwindigkeit
        #string marke
        +Fahrzeug(string marke)
        +virtual beschleunigen(int wert) void
        +virtual anzeigen() void
    }
    
    class Auto {
        -int anzahlTueren
        +Auto(string marke, int tueren)
        +beschleunigen(int wert) void
        +anzeigen() void
    }
    
    class Fahrrad {
        -bool hatGepaecktraeger
        +Fahrrad(string marke, bool gepaecktraeger)
        +beschleunigen(int wert) void
        +anzeigen() void
    }
    
    Fahrzeug <|-- Auto
    Fahrzeug <|-- Fahrrad