# Float Slider Demo

```c++
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 设置slider的取值范围
    ui->widget->setRange(95.0, 105.0);
    // 设置步长
    ui->widget->setStep(0.1);
}

```

![image](https://github.com/jiaohu/FloatSliderDemo/assets/13608671/a187c55e-ae74-47d9-ae50-2631a600461a)
