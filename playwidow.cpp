#include "playwidow.h"
#include "ui_playwidow.h"

Playwidow::Playwidow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Playwidow)
{
    ui->setupUi(this);
}

Playwidow::~Playwidow()
{
    delete ui;
}
