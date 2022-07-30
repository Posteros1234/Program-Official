#include "posterosapp.h"
#include "./ui_posterosapp.h"

PosterosApp::PosterosApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PosterosApp)
{
    ui->setupUi(this);
}

PosterosApp::~PosterosApp()
{
    delete ui;
}

