//
// 采集监控类
//

#include "CollectionMonitoringClassObject.h"

CollectionMonitoringClass::CollectionMonitoringClass(QWidget *parent) : QDialog(parent),
                                                                                    ui(new Ui::FormCOLLECTIONMONITORINGCLASSOBJECT)
{
    ui->setupUi(this);
    this->setWindowTitle("采集监控");

}
