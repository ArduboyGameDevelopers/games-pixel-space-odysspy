//
//  DisplayView.h
//  PixelSpaceOdyssey
//
//  Created by Alex Lementuev on 11/29/15.
//  Copyright © 2015 Space Madness. All rights reserved.
//

#ifndef DisplayView_h
#define DisplayView_h

#include <stdio.h>

#include "View.h"

struct RectList;
typedef struct RectList RectList;

RectList* RectListCreate(int capacity);
void RectListRender(SDL_Renderer* renderer, const RectList* list, Uint8 r, Uint8 g, Uint8 b, Uint8 a);
void RectListDestroy(RectList* list);

enum DisplayViewMode { DisplayViewModeNormal, DisplayViewModeEdit, DisplayViewModeDrag };

class DisplayView : public View
{
private:
    RectList* _pixelRects;
    RectList* _gridRects;
    bool      _gridVisible;
    SDL_Rect  _mouseTileRect;
    bool      _mouseDown;
    DisplayViewMode _mode;
    int       _lastMouseX;
    int       _lastMouseY;
    
public:
    DisplayView(int width, int height);
    ~DisplayView();
    
public:
    void copyScreenBuffer(unsigned const char* screenBuffer, int bufferWidth, int bufferHeight);
    
public:
    virtual void render(SDL_Renderer* render) const;
    virtual void mouseDown(int x, int y);
    virtual void mouseMove(int x, int y);
    virtual void mouseUp(int x, int y);
    virtual void mouseEnter(int x, int y);
    virtual void mouseExit(int x, int y);
    
public:
    inline bool gridVisible() { return _gridVisible; }
    inline void setGridVisible(bool visible) { _gridVisible = visible; }
    inline void toggleGrid() { _gridVisible = !_gridVisible; }
    inline DisplayViewMode mode() const { return _mode; }
    inline void setMode(DisplayViewMode mode) { _mode = mode; }
    
private:
    int gridIndexFromCords(int x, int y);
};

#endif /* DisplayView_h */
