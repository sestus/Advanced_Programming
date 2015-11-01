#include "Alarm.h"
#include "AlarmObserver.h"
#include <iostream>

int main() {
    Alarm alarm;
    AlarmObserver keypad("Keypad");
    AlarmObserver siren("Siren");
    AlarmObserver mailer("Mailer");
    alarm.attach(&keypad);
    alarm.attach(&siren);
    alarm.attach(&mailer);
    alarm.setState(DISARMED);
    alarm.setState(TRIGGERED);

    return 0;
}
