/*********
*
* In the name of the Father, and of the Son, and of the Holy Spirit.
*
* This file is part of BibleTime's source code, http://www.bibletime.info/.
*
* Copyright 1999-2018 by the BibleTime developers.
* The BibleTime source code is licensed under the GNU General Public License
* version 2.0.
*
**********/

#ifndef BTCONSTMODULESET_H
#define BTCONSTMODULESET_H

#include <QSet>


class CSwordModuleInfo;

class BtConstModuleSet: public QSet<CSwordModuleInfo const *> {

public: /* Methods: */

    BtConstModuleSet(QSet<CSwordModuleInfo const *> const & copy)
        : QSet<CSwordModuleInfo const *>(copy)
    {}

    BtConstModuleSet(QSet<CSwordModuleInfo *> other) {
        Q_FOREACH(CSwordModuleInfo const * const item, other)
            insert(item);
    }

};

#endif /* BTCONSTMODULESET_H */
