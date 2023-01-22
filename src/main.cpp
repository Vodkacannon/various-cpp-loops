#include <cstddef>

// 17 examples so far.

void infinite_while_const() {
    while (1) {
    
    }
}

void infinite_while_true() {
    while (true) {

    }
}

void infinite_while_var() {
    const char c = '1';

    while(c) {
        //c cannot be changed to NULL.
    }
}

void finite_while_var() {
    char c = '1';

    while(c) {
        c = NULL;
    }
}

void potentially_infinite_while_var() {
    char c = 't';

    while (c) {
        //c = NULL;
    }
}

void potentially_infinite_while_true() {
    bool b = true;

    while (b) {
        //b = false;
    }
}

void potentially_infinite_while_not_true() {
    bool b = false;

    while (!b) {
        //b = true;
    }
}

void potentially_infinite_while_true_explicit() {
    bool b = true;

    while (b ==  true) {
        //b = false;
    }
}

void potentially_infinite_while_not_true_explicit() {
    bool b = false;

    while (b != true) {
        //b = true;
    }
}

void potentionally_infinite_while_equal_to() {
    int reference = 10;

    while (reference == 10) {

    }
}

void potentionally_infinite_while_not_equal_to() {
    int reference = 9;

    while (reference != 10) {

    }
}

void infinite_for() {
    for (;;) {

    }
}

void explicit_infinite_less_than_or_equal_to_increment_for() {
    for (int i = 0; i <= 10; i++) {
        if (i == 10) {
            i == 1;
        }
    }
}

void explicit_infinite_greater_than_or_equal_increment_for() {
    for (int i = 10; i >= 10; i++) {
        if (i == __INT_MAX__) {
            i == 10;
        }
    }
}

void explicit__infinite_greater_than_or_equal_decrement_for() {
    for (int i = 1; i >= 0; i--) {
        if (i == 0) {
            i++;
        }
    }
}

void explicit_finite_less_than_for() {
    for (int i = 0; i < 10; i++) {

    }
}

void implicit_finite_increment_for() {
    int i = 0;
    for (;;) {
        if (i < 10) {
            i++;
        }
    }
}

void infinite_const_do_while() {
    do {
 
    } while(1);
}

int main() {
    return 0;
}
