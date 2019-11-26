/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Juego;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnIniciar;
    QPushButton *botonVerde;
    QPushButton *pushButton_7;
    QPushButton *botonRojo;
    QPushButton *botonAnaranjado;
    QPushButton *botonMorado;
    QPushButton *botonAmarillo;
    QPushButton *btnIniciar_2;
    QPushButton *deshacer;
    QPushButton *CargarJuego;
    QPushButton *guardarJuego;
    QLCDNumber *lcdHoras;
    QLabel *level;
    QLCDNumber *lcdMinutos;
    QLCDNumber *lcdSegundos;
    QLineEdit *NombreJugador;
    QFrame *line;
    QPushButton *bton1;
    QPushButton *bton2;
    QPushButton *bton3;
    QPushButton *bton4;
    QPushButton *califica2;
    QPushButton *califica4;
    QPushButton *califica3;
    QPushButton *califica1;
    QLabel *NumeroJugada;
    QPushButton *calificarJugada;
    QWidget *Records;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QFrame *line_3;
    QLabel *label_76;
    QFrame *line_4;
    QWidget *Ayuda;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QString::fromUtf8("GameWindow"));
        GameWindow->resize(745, 648);
        centralwidget = new QWidget(GameWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMouseTracking(false);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 741, 611));
        Juego = new QWidget();
        Juego->setObjectName(QString::fromUtf8("Juego"));
        label = new QLabel(Juego);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, -230, 771, 851));
        label->setStyleSheet(QString::fromUtf8("image: url(:/images/images/wallpaper.jpg);"));
        label_2 = new QLabel(Juego);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 10, 331, 81));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/images/images/mastermind.png);"));
        btnIniciar = new QPushButton(Juego);
        btnIniciar->setObjectName(QString::fromUtf8("btnIniciar"));
        btnIniciar->setGeometry(QRect(30, 100, 231, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Eras Bold ITC"));
        font.setPointSize(10);
        btnIniciar->setFont(font);
        btnIniciar->setCursor(QCursor(Qt::PointingHandCursor));
        btnIniciar->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 74, 39);\n"
"color: rgb(255, 255, 255);"));
        btnIniciar->setAutoDefault(false);
        btnIniciar->setFlat(false);
        botonVerde = new QPushButton(Juego);
        botonVerde->setObjectName(QString::fromUtf8("botonVerde"));
        botonVerde->setGeometry(QRect(670, 250, 51, 51));
        botonVerde->setCursor(QCursor(Qt::OpenHandCursor));
        botonVerde->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/ball_green.png);"));
        botonVerde->setFlat(false);
        pushButton_7 = new QPushButton(Juego);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(670, 180, 51, 51));
        pushButton_7->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/ball_blue.png);"));
        botonRojo = new QPushButton(Juego);
        botonRojo->setObjectName(QString::fromUtf8("botonRojo"));
        botonRojo->setGeometry(QRect(670, 320, 51, 51));
        botonRojo->setCursor(QCursor(Qt::OpenHandCursor));
        botonRojo->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/ball_red.png);"));
        botonAnaranjado = new QPushButton(Juego);
        botonAnaranjado->setObjectName(QString::fromUtf8("botonAnaranjado"));
        botonAnaranjado->setGeometry(QRect(670, 510, 51, 51));
        botonAnaranjado->setCursor(QCursor(Qt::OpenHandCursor));
        botonAnaranjado->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/ball_orange.png);"));
        botonMorado = new QPushButton(Juego);
        botonMorado->setObjectName(QString::fromUtf8("botonMorado"));
        botonMorado->setGeometry(QRect(670, 390, 51, 51));
        botonMorado->setCursor(QCursor(Qt::OpenHandCursor));
        botonMorado->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/ball_purple.png);"));
        botonAmarillo = new QPushButton(Juego);
        botonAmarillo->setObjectName(QString::fromUtf8("botonAmarillo"));
        botonAmarillo->setGeometry(QRect(670, 450, 51, 51));
        botonAmarillo->setCursor(QCursor(Qt::OpenHandCursor));
        botonAmarillo->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/ball_yellow.png);"));
        btnIniciar_2 = new QPushButton(Juego);
        btnIniciar_2->setObjectName(QString::fromUtf8("btnIniciar_2"));
        btnIniciar_2->setGeometry(QRect(30, 160, 231, 41));
        btnIniciar_2->setFont(font);
        btnIniciar_2->setCursor(QCursor(Qt::PointingHandCursor));
        btnIniciar_2->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 74, 39);\n"
"color: rgb(255, 255, 255);"));
        deshacer = new QPushButton(Juego);
        deshacer->setObjectName(QString::fromUtf8("deshacer"));
        deshacer->setGeometry(QRect(30, 210, 231, 41));
        deshacer->setFont(font);
        deshacer->setCursor(QCursor(Qt::PointingHandCursor));
        deshacer->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 74, 39);\n"
"color: rgb(255, 255, 255);"));
        CargarJuego = new QPushButton(Juego);
        CargarJuego->setObjectName(QString::fromUtf8("CargarJuego"));
        CargarJuego->setGeometry(QRect(30, 370, 231, 41));
        CargarJuego->setFont(font);
        CargarJuego->setCursor(QCursor(Qt::PointingHandCursor));
        CargarJuego->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 74, 39);\n"
"color: rgb(255, 255, 255);"));
        guardarJuego = new QPushButton(Juego);
        guardarJuego->setObjectName(QString::fromUtf8("guardarJuego"));
        guardarJuego->setGeometry(QRect(30, 310, 231, 41));
        guardarJuego->setFont(font);
        guardarJuego->setCursor(QCursor(Qt::PointingHandCursor));
        guardarJuego->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 74, 39);\n"
"color: rgb(255, 255, 255);"));
        lcdHoras = new QLCDNumber(Juego);
        lcdHoras->setObjectName(QString::fromUtf8("lcdHoras"));
        lcdHoras->setGeometry(QRect(10, 530, 81, 31));
        level = new QLabel(Juego);
        level->setObjectName(QString::fromUtf8("level"));
        level->setGeometry(QRect(10, 450, 191, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        level->setFont(font1);
        level->setLayoutDirection(Qt::LeftToRight);
        level->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        level->setScaledContents(false);
        lcdMinutos = new QLCDNumber(Juego);
        lcdMinutos->setObjectName(QString::fromUtf8("lcdMinutos"));
        lcdMinutos->setGeometry(QRect(90, 530, 81, 31));
        lcdSegundos = new QLCDNumber(Juego);
        lcdSegundos->setObjectName(QString::fromUtf8("lcdSegundos"));
        lcdSegundos->setGeometry(QRect(170, 530, 81, 31));
        NombreJugador = new QLineEdit(Juego);
        NombreJugador->setObjectName(QString::fromUtf8("NombreJugador"));
        NombreJugador->setGeometry(QRect(10, 490, 271, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier New"));
        font2.setPointSize(10);
        NombreJugador->setFont(font2);
        NombreJugador->setStyleSheet(QString::fromUtf8("color: rgb(145, 145, 145);"));
        line = new QFrame(Juego);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(625, 0, 41, 571));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        bton1 = new QPushButton(Juego);
        bton1->setObjectName(QString::fromUtf8("bton1"));
        bton1->setGeometry(QRect(330, 500, 51, 51));
        bton1->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/circle.png);\n"
"\n"
""));
        bton2 = new QPushButton(Juego);
        bton2->setObjectName(QString::fromUtf8("bton2"));
        bton2->setGeometry(QRect(390, 500, 51, 51));
        bton2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/circle.png);"));
        bton3 = new QPushButton(Juego);
        bton3->setObjectName(QString::fromUtf8("bton3"));
        bton3->setGeometry(QRect(450, 500, 51, 51));
        bton3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/circle.png);"));
        bton4 = new QPushButton(Juego);
        bton4->setObjectName(QString::fromUtf8("bton4"));
        bton4->setGeometry(QRect(510, 500, 51, 51));
        bton4->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/circle.png);"));
        califica2 = new QPushButton(Juego);
        califica2->setObjectName(QString::fromUtf8("califica2"));
        califica2->setGeometry(QRect(600, 500, 21, 21));
        califica2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/circle.png);"));
        califica4 = new QPushButton(Juego);
        califica4->setObjectName(QString::fromUtf8("califica4"));
        califica4->setGeometry(QRect(600, 530, 21, 21));
        califica4->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/circle.png);"));
        califica3 = new QPushButton(Juego);
        califica3->setObjectName(QString::fromUtf8("califica3"));
        califica3->setGeometry(QRect(570, 530, 21, 21));
        califica3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/circle.png);"));
        califica1 = new QPushButton(Juego);
        califica1->setObjectName(QString::fromUtf8("califica1"));
        califica1->setGeometry(QRect(570, 500, 21, 21));
        califica1->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/circle.png);"));
        NumeroJugada = new QLabel(Juego);
        NumeroJugada->setObjectName(QString::fromUtf8("NumeroJugada"));
        NumeroJugada->setGeometry(QRect(290, 500, 31, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font3.setPointSize(16);
        NumeroJugada->setFont(font3);
        calificarJugada = new QPushButton(Juego);
        calificarJugada->setObjectName(QString::fromUtf8("calificarJugada"));
        calificarJugada->setGeometry(QRect(30, 260, 231, 41));
        calificarJugada->setFont(font);
        calificarJugada->setCursor(QCursor(Qt::PointingHandCursor));
        calificarJugada->setStyleSheet(QString::fromUtf8("background-color: rgb(138, 74, 39);\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(Juego, QString());
        Records = new QWidget();
        Records->setObjectName(QString::fromUtf8("Records"));
        layoutWidget = new QWidget(Records);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 701, 521));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Forte"));
        font4.setPointSize(20);
        label_3->setFont(font4);

        verticalLayout_2->addWidget(label_3);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_3);

        label_76 = new QLabel(layoutWidget);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setPixmap(QPixmap(QString::fromUtf8(":/images/images/guinnes.png")));

        horizontalLayout_2->addWidget(label_76);


        verticalLayout_3->addLayout(horizontalLayout_2);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_4);

        tabWidget->addTab(Records, QString());
        Ayuda = new QWidget();
        Ayuda->setObjectName(QString::fromUtf8("Ayuda"));
        pushButton_6 = new QPushButton(Ayuda);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 20, 75, 23));
        tabWidget->addTab(Ayuda, QString());
        GameWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 745, 21));
        GameWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GameWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GameWindow->setStatusBar(statusbar);

        retranslateUi(GameWindow);

        tabWidget->setCurrentIndex(0);
        btnIniciar->setDefault(false);


        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindow)
    {
        GameWindow->setWindowTitle(QApplication::translate("GameWindow", "GameWindow", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        btnIniciar->setText(QApplication::translate("GameWindow", "INICIAR JUEGO", nullptr));
        botonVerde->setText(QString());
        pushButton_7->setText(QString());
        botonRojo->setText(QString());
        botonAnaranjado->setText(QString());
        botonMorado->setText(QString());
        botonAmarillo->setText(QString());
        btnIniciar_2->setText(QApplication::translate("GameWindow", "TERMINAR JUEGO", nullptr));
        deshacer->setText(QApplication::translate("GameWindow", "DESHACER", nullptr));
        CargarJuego->setText(QApplication::translate("GameWindow", "CARGAR JUEGO", nullptr));
        guardarJuego->setText(QApplication::translate("GameWindow", "GUARDAR JUEGO", nullptr));
        level->setText(QApplication::translate("GameWindow", "NIVEL: F\303\201CIL", nullptr));
        NombreJugador->setText(QApplication::translate("GameWindow", "Nombre de jugador...", nullptr));
        bton1->setText(QString());
        bton2->setText(QString());
        bton3->setText(QString());
        bton4->setText(QString());
        califica2->setText(QString());
        califica4->setText(QString());
        califica3->setText(QString());
        califica1->setText(QString());
        NumeroJugada->setText(QApplication::translate("GameWindow", "1", nullptr));
        calificarJugada->setText(QApplication::translate("GameWindow", "CALIFICAR  JUGADA", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Juego), QApplication::translate("GameWindow", "Juego", nullptr));
        label_3->setText(QApplication::translate("GameWindow", "Records mundiales de Master Mind", nullptr));
        pushButton_5->setText(QApplication::translate("GameWindow", "Generar Pdf", nullptr));
        pushButton->setText(QApplication::translate("GameWindow", "Ver Pdf", nullptr));
        label_76->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Records), QApplication::translate("GameWindow", "R\303\251cords", nullptr));
        pushButton_6->setText(QApplication::translate("GameWindow", "Ver Ayuda", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Ayuda), QApplication::translate("GameWindow", "Ayuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
