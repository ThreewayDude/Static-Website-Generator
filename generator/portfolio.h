#pragma once

#include "containers/string.h"
#include "containers/darray.h"

typedef struct
{
    String name;
    String date;
    String link;
    String description;
    DArray(String) skills;
    DArray(String) images;
} Project;

Project project_make();
void project_free(Project* project);

typedef struct
{
    String name;
    String color;
    String image;
    String icon;
    DArray(String) abilities;
    String blurb;
    DArray(Project) projects;
} Persona;

Persona persona_make();
void persona_free(Persona* persona);

typedef struct
{
    String home_template;
    String page_template;
    String outdir;
    DArray(Persona) personas;
} Portfolio;

Portfolio portfolio_make();
void portfolio_free(Portfolio* portfolio);