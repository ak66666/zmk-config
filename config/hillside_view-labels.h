// Modified from
// https://github.com/wannabecoffeenerd/zmk/blob/5f348932a3dfbfd1890920b9653ad0dde848a1cd/app/boards/shields/hillside_view/hillside_view.dtsi
//
// | LT4  | LT3  | LT2  | LT1  | LT0  |                                 | RT0  | RT1  | RT2  | RT3  | RT4  |
// | LM4  | LM3  | LM2  | LM1  | LM0  |                                 | RM0  | RM1  | RM2  | RM3  | RM4  |
// | LB4  | LB3  | LB2  | LB1  | LB0  |                                 | RB0  | RB1  | RB2  | RB3  | RB4  |
//                                    | LH4  |                   | RH4  |
//                      | LH3  | LH2  | LH1  | LH0  |     | RH0  | RH1  | RH2  | RH3  |

#define LT0  4  // left-top row
#define LT1  3
#define LT2  2
#define LT3  1
#define LT4  0
// LT5 chopped off in 5x3 configuration

#define RT0  5  // right-top row
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9
// RT5 chopped off in 5x3 configuration

#define LM0 14  // left-middle row
#define LM1 13
#define LM2 12
#define LM3 11
#define LM4 10
// LM5 chopped off in 5x3 configuration

#define RM0 15  // right-middle row
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19
// RM5 chopped off in 5x3 configuration

#define LB0 24  // left-bottom row
#define LB1 23
#define LB2 22
#define LB3 21
#define LB4 20
// LB5 chopped off in 5x3 configuration

#define RB0 25  // right-bottom row
#define RB1 26
#define RB2 27
#define RB3 28
#define RB4 29
// RB5 chopped off in 5x3 configuration

#define LH0 35  // left thumb keys
#define LH1 34
#define LH2 33
#define LH3 32
#define LH4 30

#define RH0 36  // right thumb keys
#define RH1 37
#define RH2 38
#define RH3 39
#define RH4 31
