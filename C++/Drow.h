#pragma once

extern int const CanvasX;
extern int const CanvasY;
extern char Canvas[3][3];

void ShowCanvas();
void InitCanvas();
int NowPlaying(int index);
void InsertXYToCanvas(int index);
void NowPlayingText(int index);