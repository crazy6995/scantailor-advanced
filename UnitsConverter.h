
#ifndef SCANTAILOR_UNITSCONVERTER_H
#define SCANTAILOR_UNITSCONVERTER_H


#include <QtGui/QTransform>
#include "Dpi.h"
#include "Units.h"

class UnitsConverter {
 public:
  UnitsConverter() = default;

  explicit UnitsConverter(const Dpi& dpi);

  void convert(double& horizontalValue, double& verticalValue, Units fromUnits, Units toUnits) const;

  QTransform transform(Units fromUnits, Units toUnits) const;

  const Dpi& getDpi() const;

  void setDpi(const Dpi& dpi);

 private:
  Dpi m_dpi;
};


#endif  // SCANTAILOR_UNITSCONVERTER_H
