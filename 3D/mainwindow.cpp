#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->right_left, &QSlider::valueChanged, ui->ekran, &Ekran::on_right_left_valueChanged);
    connect(ui->up_down, &QSlider::valueChanged, ui->ekran, &Ekran::on_up_down_valueChanged);
    connect(ui->translateZ, &QSlider::valueChanged, ui->ekran, &Ekran::on_translateZ_valueChanged);
    connect(ui->rotation, &QSlider::valueChanged, ui->ekran, &Ekran::on_rotation_valueChanged);
    connect(ui->rotation2, &QSlider::valueChanged, ui->ekran, &Ekran::on_rotation2_valueChanged);
    connect(ui->rotation3, &QSlider::valueChanged, ui->ekran, &Ekran::on_rotation3_valueChanged);
    connect(ui->scaling_rl, &QSlider::valueChanged, ui->ekran, &Ekran::on_scaling_rl_valueChanged);
    connect(ui->scaling_ud, &QSlider::valueChanged, ui->ekran, &Ekran::on_scaling_ud_valueChanged);
    connect(ui->horizontalSlider, &QSlider::valueChanged, ui->ekran, &Ekran::on_horizontalSlider_valueChanged);
    connect(ui->shearing1, &QSlider::valueChanged, ui->ekran, &Ekran::on_shearing1_valueChanged);
    connect(ui->shearing2, &QSlider::valueChanged, ui->ekran, &Ekran::on_shearing2_valueChanged);
    connect(ui->reset, &QPushButton::clicked, ui->ekran, &Ekran::on_reset_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}
