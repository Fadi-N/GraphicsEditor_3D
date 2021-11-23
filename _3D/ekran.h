#ifndef EKRAN_H
#define EKRAN_H

#include <QWidget>

class Ekran : public QWidget
{
    Q_OBJECT
public:
    QImage im;
    explicit Ekran(QWidget *parent = nullptr);
    int dx = 1, dy= 1, dz =1, f=1000, tru, cx, cy, cz;
    float sx = 1, sy = 1, sz=1, alpha, alpha1, alpha2, shx = 0, shy = 0, M[4*4];

    int wynik1[4*1], a[3], b[3], c[3], N[3];

protected:
    std::vector<int> point{-30,30,30,30,30,30,30,30,-30,-30,30,-30,-30,-30,30,30,-30,30,30,-30,-30,-30,-30,-30};
    std::vector<int> pointp{-30,30,30,30,30,30,30,30,-30,-30,30,-30,-30,-30,30,30,-30,30,30,-30,-30,-30,-30,-30};
    std::vector<int> pointq{-30,30,30,30,30,30,30,30,-30,-30,30,-30,-30,-30,30,30,-30,30,30,-30,-30,-30,-30,-30};
    int walls[6][4]={{0,3,2,1},{4,0,1,5},{4,7,3,0},{3,7,6,2},{5,6,7,4},{1,2,6,5}};
    void wstawPiksel(int x, int y, int r, int g, int b);
    void BresenhamLine(int x1, int y1, int x2, int y2);
    void paintEvent(QPaintEvent *);
    void draw();
    void macierz();
    void clear();
signals:

public slots:
    void on_right_left_valueChanged(int value);
    void on_translateZ_valueChanged(int value);
    void on_up_down_valueChanged(int value);
    void on_rotation_valueChanged(int value);
    void on_rotation2_valueChanged(int value);
    void on_rotation3_valueChanged(int value);
    void on_scaling_rl_valueChanged(int value);
    void on_scaling_ud_valueChanged(int value);
    void on_horizontalSlider_valueChanged(int value);
    void on_checkBox_toggled(bool checked);
    void on_reset_clicked();
};

#endif // EKRAN_H
