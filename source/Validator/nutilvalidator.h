#ifndef NUTILVALIDATOR_H
#define NUTILVALIDATOR_H

#include <QString>
#include <QStringList>
#include <QImage>
#include "source/util/SimplexNoise.h"
#include <math.h>
#include <QFile>
#include <QTextStream>

class NutilValidator {
public:
    NutilValidator();
    void CreateSegmentedImage(QString fname, int w, int h, int blobs, QColor col);
    void CreateSlicedMask(QString fname, int w, int h, float a,  QColor background, QColor foreground);

};

#endif // NUTILVALIDATOR_H
