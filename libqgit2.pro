######################################################################
# Automatically generated by qmake (2.01a) Di. Aug 16 11:19:28 2011
######################################################################

TEMPLATE = lib
TARGET = qgit2

DEPENDPATH += . src \
    libgit2/src libgit2/include libgit2/include/git2 \
    libgit2/deps/http-parser

INCLUDEPATH += . src \
    libgit2/include libgit2/src \
    libgit2/deps/http-parser

CONFIG += staticlib

# Input
HEADERS += \
    libqgit2_export.h \
    qgitblob.h \
    qgitcommit.h \
    qgitdatabase.h \
    qgitdatabasebackend.h \
    qgitindex.h \
    qgitindexentry.h \
    qgitindexmodel.h \
    qgitobject.h \
    qgitoid.h \
    qgitref.h \
    qgitrepository.h \
    qgitrevwalk.h \
    qgitsignature.h \
    qgittag.h \
    qgittree.h \
    qgittreeentry.h \
    qgitexception.h \
    qgit2.h \
    src/qgitconfig.h

SOURCES += \
    qgitblob.cpp \
    qgitcommit.cpp \
    qgitdatabase.cpp \
    qgitdatabasebackend.cpp \
    qgitindex.cpp \
    qgitindexentry.cpp \
    qgitindexmodel.cpp \
    qgitobject.cpp \
    qgitoid.cpp \
    qgitref.cpp \
    qgitrepository.cpp \
    qgitrevwalk.cpp \
    qgitsignature.cpp \
    qgittag.cpp \
    qgittree.cpp \
    qgittreeentry.cpp \
    qgitexception.cpp \
    src/qgitconfig.cpp

include(libgit2.pri)
include(http-parser.pri)

DEFINES += STDC _GNU_SOURCE
INCLUDEPATH += libgit2/deps/zlib
DEPENDPATH += libgit2/deps/zlib
include(zlib.pri)
