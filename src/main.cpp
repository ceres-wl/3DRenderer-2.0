#define RAYGUI_IMPLEMENTATION

// ToDo list antiga, vou manter por enquanto mas ignore!!!
/* ToDo:
    - Implement a better acceleration structure than the bounding box
    - Give more live control to the renderer using the UI
    - Implement threading so that the UI is not paused while rendering
    - Make a Readme
*/

#include "./app/app.h"

int main(){
    SetTraceLogLevel(LOG_WARNING);
    
    App app(700, 700);
    
    app.start();

    return 0;
}