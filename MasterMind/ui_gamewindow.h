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
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QLabel *label_56;
    QLabel *label_57;
    QLabel *label_58;
    QLabel *label_59;
    QLabel *label_60;
    QLabel *label_61;
    QLabel *label_62;
    QLabel *label_63;
    QLabel *label_64;
    QLabel *label_65;
    QLabel *label_66;
    QLabel *label_67;
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
        label_4 = new QLabel(Juego);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 310, 51, 51));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_5 = new QLabel(Juego);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(510, 310, 51, 51));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_6 = new QLabel(Juego);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(450, 310, 51, 51));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_7 = new QLabel(Juego);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(390, 310, 51, 51));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_7->setScaledContents(false);
        label_8 = new QLabel(Juego);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(560, 310, 41, 21));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_9 = new QLabel(Juego);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(590, 310, 41, 21));
        label_9->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_10 = new QLabel(Juego);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(560, 340, 41, 21));
        label_10->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_11 = new QLabel(Juego);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(590, 340, 41, 21));
        label_11->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_12 = new QLabel(Juego);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(390, 250, 51, 51));
        label_12->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_12->setScaledContents(false);
        label_13 = new QLabel(Juego);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(330, 250, 51, 51));
        label_13->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_14 = new QLabel(Juego);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(450, 250, 51, 51));
        label_14->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_15 = new QLabel(Juego);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(510, 250, 51, 51));
        label_15->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_16 = new QLabel(Juego);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(560, 280, 41, 21));
        label_16->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_17 = new QLabel(Juego);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(560, 250, 41, 21));
        label_17->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_18 = new QLabel(Juego);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(590, 280, 41, 21));
        label_18->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_19 = new QLabel(Juego);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(590, 250, 41, 21));
        label_19->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_20 = new QLabel(Juego);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(390, 190, 51, 51));
        label_20->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_20->setScaledContents(false);
        label_21 = new QLabel(Juego);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(330, 190, 51, 51));
        label_21->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_22 = new QLabel(Juego);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(450, 190, 51, 51));
        label_22->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_23 = new QLabel(Juego);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(510, 190, 51, 51));
        label_23->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_24 = new QLabel(Juego);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(560, 220, 41, 21));
        label_24->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_25 = new QLabel(Juego);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(560, 190, 41, 21));
        label_25->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_26 = new QLabel(Juego);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(590, 220, 41, 21));
        label_26->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_27 = new QLabel(Juego);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(590, 190, 41, 21));
        label_27->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_28 = new QLabel(Juego);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(390, 130, 51, 51));
        label_28->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_28->setScaledContents(false);
        label_29 = new QLabel(Juego);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(330, 130, 51, 51));
        label_29->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_30 = new QLabel(Juego);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(450, 130, 51, 51));
        label_30->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_31 = new QLabel(Juego);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(510, 130, 51, 51));
        label_31->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_32 = new QLabel(Juego);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(560, 160, 41, 21));
        label_32->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_33 = new QLabel(Juego);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(560, 130, 41, 21));
        label_33->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_34 = new QLabel(Juego);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(590, 160, 41, 21));
        label_34->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_35 = new QLabel(Juego);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(590, 130, 41, 21));
        label_35->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_36 = new QLabel(Juego);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(390, 70, 51, 51));
        label_36->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_36->setScaledContents(false);
        label_37 = new QLabel(Juego);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(330, 70, 51, 51));
        label_37->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_38 = new QLabel(Juego);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(450, 70, 51, 51));
        label_38->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_39 = new QLabel(Juego);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(510, 70, 51, 51));
        label_39->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_40 = new QLabel(Juego);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(560, 100, 41, 21));
        label_40->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_41 = new QLabel(Juego);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(560, 70, 41, 21));
        label_41->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_42 = new QLabel(Juego);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(590, 100, 41, 21));
        label_42->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_43 = new QLabel(Juego);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(590, 70, 41, 21));
        label_43->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_44 = new QLabel(Juego);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(390, 10, 51, 51));
        label_44->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_44->setScaledContents(false);
        label_45 = new QLabel(Juego);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(330, 10, 51, 51));
        label_45->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_46 = new QLabel(Juego);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(450, 10, 51, 51));
        label_46->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_47 = new QLabel(Juego);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(510, 10, 51, 51));
        label_47->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_48 = new QLabel(Juego);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(560, 40, 41, 21));
        label_48->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_49 = new QLabel(Juego);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(560, 10, 41, 21));
        label_49->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_50 = new QLabel(Juego);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(590, 40, 41, 21));
        label_50->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_51 = new QLabel(Juego);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(590, 10, 41, 21));
        label_51->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_52 = new QLabel(Juego);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(450, 370, 51, 51));
        label_52->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_53 = new QLabel(Juego);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(330, 430, 51, 51));
        label_53->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_54 = new QLabel(Juego);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(560, 430, 41, 21));
        label_54->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_55 = new QLabel(Juego);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(390, 430, 51, 51));
        label_55->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_55->setScaledContents(false);
        label_56 = new QLabel(Juego);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(330, 370, 51, 51));
        label_56->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_57 = new QLabel(Juego);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setGeometry(QRect(560, 460, 41, 21));
        label_57->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_58 = new QLabel(Juego);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setGeometry(QRect(510, 370, 51, 51));
        label_58->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_59 = new QLabel(Juego);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setGeometry(QRect(590, 460, 41, 21));
        label_59->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_60 = new QLabel(Juego);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setGeometry(QRect(450, 430, 51, 51));
        label_60->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_61 = new QLabel(Juego);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setGeometry(QRect(590, 400, 41, 21));
        label_61->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_62 = new QLabel(Juego);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setGeometry(QRect(560, 400, 41, 21));
        label_62->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_63 = new QLabel(Juego);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setGeometry(QRect(390, 370, 51, 51));
        label_63->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_63->setScaledContents(false);
        label_64 = new QLabel(Juego);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setGeometry(QRect(510, 430, 51, 51));
        label_64->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_65 = new QLabel(Juego);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setGeometry(QRect(590, 430, 41, 21));
        label_65->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_66 = new QLabel(Juego);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setGeometry(QRect(590, 370, 41, 21));
        label_66->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
        label_67 = new QLabel(Juego);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setGeometry(QRect(560, 370, 41, 21));
        label_67->setStyleSheet(QString::fromUtf8("image: url(:/images/images/circle.png);"));
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
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
        label_28->setText(QString());
        label_29->setText(QString());
        label_30->setText(QString());
        label_31->setText(QString());
        label_32->setText(QString());
        label_33->setText(QString());
        label_34->setText(QString());
        label_35->setText(QString());
        label_36->setText(QString());
        label_37->setText(QString());
        label_38->setText(QString());
        label_39->setText(QString());
        label_40->setText(QString());
        label_41->setText(QString());
        label_42->setText(QString());
        label_43->setText(QString());
        label_44->setText(QString());
        label_45->setText(QString());
        label_46->setText(QString());
        label_47->setText(QString());
        label_48->setText(QString());
        label_49->setText(QString());
        label_50->setText(QString());
        label_51->setText(QString());
        label_52->setText(QString());
        label_53->setText(QString());
        label_54->setText(QString());
        label_55->setText(QString());
        label_56->setText(QString());
        label_57->setText(QString());
        label_58->setText(QString());
        label_59->setText(QString());
        label_60->setText(QString());
        label_61->setText(QString());
        label_62->setText(QString());
        label_63->setText(QString());
        label_64->setText(QString());
        label_65->setText(QString());
        label_66->setText(QString());
        label_67->setText(QString());
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