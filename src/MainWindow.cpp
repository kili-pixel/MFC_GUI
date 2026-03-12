#include "MainWindow.h"

#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), statusLabel(new QLabel("Status: gotowy", this)), actionButton(new QPushButton("Kliknij mnie", this))
{
    auto* central = new QWidget(this);
    auto* layout = new QVBoxLayout(central);

    layout->addWidget(statusLabel);
    layout->addWidget(actionButton);

    setCentralWidget(central);
    setWindowTitle("Qt GUI Demo");
    resize(360, 160);

    connect(actionButton, &QPushButton::clicked, this, [this]() {
        statusLabel->setText("Status: przycisk został kliknięty");
    });
}
