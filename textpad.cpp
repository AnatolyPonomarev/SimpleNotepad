#include "textpad.h"
#include "ui_textpad.h"

Textpad::Textpad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Textpad)
{
    ui->setupUi(this);
}

Textpad::~Textpad()
{
    delete ui;
}

void Textpad::newDocument(){};
void Textpad::open(){};
void Textpad::save(){};
void Textpad::exit(){};
