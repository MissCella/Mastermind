#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "QRectF"

int segundos = 0;
int minutos = 0;
int horas = 0;
string playStack[100][4];
int n=100, top=-1;
int coorX = 330;
int coorY = 450;
int calificacionX = 560;
int calificacionY = 460;

GameWindow::GameWindow(int pNivel,int pTemporizador,int repetido,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    ui->btnIniciar_2->setFlat(true);
    this->nivel = pNivel;
    this->temporizador = pTemporizador;
    this->repetible = repetido;
    this->configuracion = Configuration();
    this->configuracion.cargarConfig(nivel, temporizador, repetible);
    if (pNivel == 1){
        ui->level->setText("NIVEL: FÁCIL");
    }else if(pNivel == 2){
        ui->level->setText("NIVEL: MEDIO");
    }else if(pNivel == 3){
        ui->level->setText("NIVEL: DIFÍCIL");
    }
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::fTimer()
{
    ui->lcdSegundos->display(segundos++);
    if (minutos>=5 && segundos>=30 && this->temporizador == 1){
        QMessageBox termino;
        termino.critical(NULL, "Tiempo Finalizado", "Ha llegado al limite de tiempo!");
        cronometro->stop();
    }
    if (segundos>60){
        segundos = 0;
        ui->lcdSegundos->display(segundos);
        minutos++;
        ui->lcdMinutos->display(minutos);
        if(minutos>60){
            minutos = 0;
            ui->lcdMinutos->display(minutos);
            horas++;
            ui->lcdHoras->display(horas);
        }
    }
}

void GameWindow::on_btnIniciar_clicked()
{
    this->combinacion = Combinacion();
    this->combinacion.generarCombinacion(this->configuracion.repetible);

    QString qname = ui->NombreJugador->text();//Agarra el nombre de la UI
    string name= qname.toStdString();

    this->game = Game(name, this->configuracion.nivel);
    this->game.setDate();

    cronometro = new QTimer(this);
    connect(cronometro, SIGNAL(timeout()),this,SLOT(fTimer()));
    cronometro->start(1000);

    ui->btnIniciar->setFlat(true);
    ui->btnIniciar_2->setFlat(false);
}

void GameWindow::on_btnIniciar_2_clicked()
{
    cronometro->stop();
    QMessageBox salir;
    salir.setText("¿Esta seguro/a que quiere salir?");
    salir.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    int ret = salir.exec();

    switch (ret) {
      case QMessageBox::Yes:
        segundos = 0;
        minutos = 0;
        horas = 0;
        this->~GameWindow();
        break;
      case QMessageBox::No:
        cronometro->start(1000);
        break;
      default:
        break;
    }
}

void GameWindow::on_btn_Configuracion_clicked()
{

}

void GameWindow::on_pushButton_5_clicked()
{
    QPdfWriter pdf("Records.pdf");
    QPainter painter(&pdf);
        painter.setPen(Qt::black);
        painter.drawText(100,0,"Hola esto es una prueba");
        painter.end();
    QMessageBox::information(NULL, "Mensaje","Se ha generado el PDF de records");
}

void GameWindow::on_pushButton_clicked()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile("Records.pdf"));
}

void GameWindow::on_pushButton_6_clicked()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile("ManualUsuario.pdf"));
}



void GameWindow::on_pushButton_7_clicked()
{
    this->pathColor = "border-image: url(:/images/images/ball_blue.png);";
    this->colorActual = "blue";
}

void GameWindow::on_botonVerde_clicked()
{
    this->pathColor = "border-image: url(:/images/images/ball_green.png);";
    this->colorActual = "green";
}

void GameWindow::on_botonRojo_clicked()
{
    this->pathColor = "border-image: url(:/images/images/ball_red.png);";
    this->colorActual = "red";
}

void GameWindow::on_botonMorado_clicked()
{
    this->pathColor = "border-image: url(:/images/images/ball_purple.png);";
    this->colorActual = "purple";
}

void GameWindow::on_botonAmarillo_clicked()
{
    this->pathColor = "border-image: url(:/images/images/ball_yellow.png);";
    this->colorActual = "yellow";
}

void GameWindow::on_botonAnaranjado_clicked()
{
    this->pathColor = "border-image: url(:/images/images/ball_orange.png);";
    this->colorActual = "orange";
}



void GameWindow::on_bton1_clicked()
{
    ui->bton1->setStyleSheet(this->pathColor);
    this->intento->insertarFinal(this->colorActual);
}

void GameWindow::on_bton2_clicked()
{
    ui->bton2->setStyleSheet(this->pathColor);
    this->intento->insertarFinal(this->colorActual);
}

void GameWindow::on_bton3_clicked()
{
    ui->bton3->setStyleSheet(this->pathColor);
    this->intento->insertarFinal(this->colorActual);
}

void GameWindow::on_bton4_clicked()
{
    ui->bton4->setStyleSheet(this->pathColor);
    this->intento->insertarFinal(this->colorActual);
}

void GameWindow::on_calificarJugada_clicked()
{
    if(this->game.numJugada <= 9-nivel){
        this->game.numJugada++;
        string display = to_string(this->game.numJugada);
        ui->NumeroJugada->setText(QString::fromStdString(display));

        string arrayintento[4];
        int resultado[4];

        for(int i =0; i<4;i++){
            if (!this->intento->listaVacia()){
                arrayintento[i] = this->intento->getPrimero()->getCadena();
            }
            this->intento->eliminarInicio();
        }

        this->deshacer = this->intento;
        this->intento = new ListaEnlazada();

        if(!arrayintento[0].empty()){
            QLabel *label1 = new QLabel(this);
            label1->setStyleSheet("image: url(:/images/images/ball_"+QString::fromStdString(arrayintento[0])+".png);");
            label1->setGeometry(coorX, coorY, 51,51);
            label1->show();


            QLabel *label2 = new QLabel(this);
            label2->setStyleSheet("image: url(:/images/images/ball_"+QString::fromStdString(arrayintento[1])+".png);");
            label2->setGeometry(coorX+60, coorY, 51,51);
            label2->show();

            QLabel *label3 = new QLabel(this);
            label3->setStyleSheet("image: url(:/images/images/ball_"+QString::fromStdString(arrayintento[2])+".png);");
            label3->setGeometry(coorX+120, coorY, 51,51);
            label3->show();

            QLabel *label4 = new QLabel(this);
            label4->setStyleSheet("image: url(:/images/images/ball_"+QString::fromStdString(arrayintento[3])+".png);");
            label4->setGeometry(coorX+180, coorY, 51,51);
            label4->show();
            coorY -=60;

            QLabel *labelCalificacion = new QLabel(this);
            labelCalificacion->setStyleSheet("image: url(:/images/images/circle.png);");
            labelCalificacion->setGeometry(calificacionX, calificacionY, 41,21);
            labelCalificacion->show();

            QLabel *labelCalificacion2 = new QLabel(this);
            labelCalificacion2->setStyleSheet("image: url(:/images/images/circle.png);");
            labelCalificacion2->setGeometry(calificacionX+30, calificacionY, 41,21);
            labelCalificacion2->show();

            QLabel *labelCalificacion3 = new QLabel(this);
            labelCalificacion3->setStyleSheet("image: url(:/images/images/circle.png);");
            labelCalificacion3->setGeometry(calificacionX, calificacionY+30, 41,21);
            labelCalificacion3->show();

            QLabel *labelCalificacion4 = new QLabel(this);
            labelCalificacion4->setStyleSheet("image: url(:/images/images/circle.png);");
            labelCalificacion4->setGeometry(calificacionX+30, calificacionY+30, 41,21);
            labelCalificacion4->show();

            calificacionY -=60;
        }
        else{
            QLabel *label1 = new QLabel(this);
            label1->setStyleSheet("image: url(:/images/images/circle.png);");
            label1->setGeometry(coorX, coorY, 51,51);
            label1->show();


            QLabel *label2 = new QLabel(this);
            label2->setStyleSheet("image: url(:/images/images/circle.png);");
            label2->setGeometry(coorX+60, coorY, 51,51);
            label2->show();

            QLabel *label3 = new QLabel(this);
            label3->setStyleSheet("image: url(:/images/images/circle.png);");
            label3->setGeometry(coorX+120, coorY, 51,51);
            label3->show();

            QLabel *label4 = new QLabel(this);
            label4->setStyleSheet("image: url(:/images/images/circle.png);");
            label4->setGeometry(coorX+180, coorY, 51,51);
            label4->show();
            coorY -=60;

            QLabel *labelCalificacion = new QLabel(this);
            labelCalificacion->setStyleSheet("image: url(:/images/images/circle.png);");
            labelCalificacion->setGeometry(calificacionX, calificacionY, 41,21);
            labelCalificacion->show();

            QLabel *labelCalificacion2 = new QLabel(this);
            labelCalificacion2->setStyleSheet("image: url(:/images/images/circle.png);");
            labelCalificacion2->setGeometry(calificacionX+30, calificacionY, 41,21);
            labelCalificacion2->show();

            QLabel *labelCalificacion3 = new QLabel(this);
            labelCalificacion3->setStyleSheet("image: url(:/images/images/circle.png);");
            labelCalificacion3->setGeometry(calificacionX, calificacionY+30, 41,21);
            labelCalificacion3->show();

            QLabel *labelCalificacion4 = new QLabel(this);
            labelCalificacion4->setStyleSheet("image: url(:/images/images/circle.png);");
            labelCalificacion4->setGeometry(calificacionX+30, calificacionY+30, 41,21);
            labelCalificacion4->show();

            calificacionY -=60;
        }


        this->combinacion.calificarJugada(arrayintento,resultado);

        ui->bton1->setStyleSheet("border-image: url(:/images/images/circle.png);");
        ui->bton2->setStyleSheet("border-image: url(:/images/images/circle.png);");
        ui->bton3->setStyleSheet("border-image: url(:/images/images/circle.png);");
        ui->bton4->setStyleSheet("border-image: url(:/images/images/circle.png);");




    }else{
        QMessageBox::critical(nullptr, "Final Juego", "Se han acabado la cantidad de jugadas, intentelo en un nuevo juego");
        this->~GameWindow();
    }
}

void GameWindow::on_guardarJuego_clicked()
{
    this->game.saveGame();
}

void GameWindow::on_deshacer_clicked()
{
    string arraycolores[4];
    for(int i =0; i<4;i++){
        if (!this->deshacer->listaVacia()){
            arraycolores[i] = this->deshacer->getPrimero()->getCadena();
            cout<<this->deshacer->getPrimero()->getCadena()<<endl;
        }
        this->deshacer->eliminarInicio();
    }

    ui->bton1->setStyleSheet("border-image: url(:/images/images/ball_"+QString::fromStdString(arraycolores[0])+".png);");
    ui->bton2->setStyleSheet("border-image: url(:/images/images/ball_"+QString::fromStdString(arraycolores[1])+".png);");
    ui->bton3->setStyleSheet("border-image: url(:/images/images/ball_"+QString::fromStdString(arraycolores[2])+".png);");
    ui->bton4->setStyleSheet("border-image: url(:/images/images/ball_"+QString::fromStdString(arraycolores[3])+".png);");
}


void push(string* play) {
   if(top>=n-1)
      cout<<"Stack Overflow"<<endl;
   else
   {
      top++;
      for (int i = 0 ; i < 4 ; i++)
      {
          playStack[top][i]=*(play + i);
      }
   }
}

void pop(string* res) {
   if(top<=-1)
      cout<<"Stack Underflow"<<endl;
   else {
       cout << "The popped element is --- ";
      for (int i = 0 ; i < 4 ; i++)
      {
          cout << playStack[top][i] << " --- ";
          *(res + i)=playStack[top][i];
      }
      cout << endl;

      top--;
   }
}


