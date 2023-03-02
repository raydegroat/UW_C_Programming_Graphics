// Header file for Raymond de Groat's UW C programming final project "Draw Circles" 

#ifndef PROJECT_H
#define PROJECT_H

/* structs **************************************/

typedef struct GCR_point_s
{
	int xco;
	int yco;
} CGR_point_t, *CGR_point_p_t;


typedef struct CGR_line_s
{
	CGR_point_t end1;
	CGR_point_t end2;
} CGR_line_t, *CGR_line_p_t;


typedef struct CGR_circle_s
{
	CGR_point_t center;
	int			radius;
} CGR_circle_t, *CGR_circle_p_t;


typedef struct CGR_ellipse_s
{
	CGR_point_t center;
	int			xRadius;
	int			yRadius;
} CGR_ellipse_t, *CGR_ellipse_p_t;


/* functions *************************************/

void CGR_draw_point( CGR_point_p_t point);
void CGR_draw_points( CGR_point_p_t points, int num_points);

void CGR_draw_line( CGR_line_p_t line);
void CGR_draw_lines(CGR_line_p_t lines, int num_lines);

void CGR_draw_circle(CGR_circle_p_t circle);
void CGR_draw_circles(CGR_circle_p_t circles, int num_circles);

void CGR_draw_ellipse( CGR_ellipse_p_t ellipse);
void CGR_draw_ellipses( CGR_ellipse_p_t ellipses, int num_ellipses);


#endif
