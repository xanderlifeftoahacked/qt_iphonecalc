#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QString>

namespace stylesheets {

inline const QString numericReleased =
    "color: white; background-color: rgba(52,52,52,255); border-style: "
    "solid; border-width:1px; border-radius:35px;border-color: "
    "rgba(52,52,52,255);";
inline const QString numericPressed =
    "color: white; background-color: rgba(114,114,114,255); border-style: "
    "solid; border-width:1px; border-radius:35px;border-color: "
    "rgba(52,52,52,255);";

inline const QString actionReleased =
    "background-color: rgba(255,158,9,255);border-style: "
    "solid;border-width:1px;border-radius:35px;border-color: "
    "rgba(255,158,9,255);text-align: top;color: white;";
inline const QString actionPressed =
    "color: white; background-color: rgba(114,114,114,255); border-style: "
    "solid; border-width:1px; border-radius:35px;border-color: "
    "rgba(52,52,52,255);";

inline const QString acPressed =
    "background-color: rgba(114,114,114,255);"
    "border-style: solid;color: black;border-width:1px;border-radius:35px;";

inline const QString acReleased =
    "background-color: rgba(165,165,165,255); border-style: solid;color: "
    "black;border-width:1px;border-radius:35px;";

} // namespace stylesheets

#endif // CONSTANTS_H
