/******************************************************************************
 * This file is part of the Gluon Development Platform
 * Copyright (C) 2011 Laszlo Papp <djszapi@archlinux.us>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef LIBQGIT2_EXPORT_H
#define LIBQGIT2_EXPORT_H

#include <QtCore/qglobal.h>
#include <QtCore/QObject>

/** @defgroup LibQGit2 The Qt Library for Git revision control featuring libgit2
 * Qt wrapper classes for the LibGit2 library.
 */

#ifndef LIBQGIT2_EXPORT
#if defined(MAKE_LIBQGIT2_LIB)
#define LIBQGIT2_EXPORT Q_DECL_EXPORT
#else
#define LIBQGIT2_EXPORT Q_DECL_IMPORT
#endif
#endif

#ifndef LIBQGIT2_EXPORT_DEPRECATED
#define LIBQGIT2_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
#endif

#ifndef LIBQGIT2_BLOB_EXPORT
#if defined(MAKE_LIBQGIT2_COMPONENT_BLOB)
#  define LIBQGIT2_BLOB_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_BLOB_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_BLOB_EXPORT_DEPRECATED
#  define LIBQGIT2_BLOB_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_REPOSITORY_EXPORT
#if defined(MAKE_LIBQGIT2_COMPONENT_REPOSITORY)
#  define LIBQGIT2_REPOSITORY_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_REPOSITORY_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_REPOSITORY_EXPORT_DEPRECATED
#  define LIBQGIT2_REPOSITORY_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_DATABASE_EXPORT
#if defined(MAKE_LIBQGIT2_COMPONENT_DATABASE)
#  define LIBQGIT2_DATABASE_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_DATABASE_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_DATABASE_EXPORT_DEPRECATED
#  define LIBQGIT2_DATABASE_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_DATABASEBACKEND_EXPORT
#if defined(MAKE_LIBQGIT2_COMPONENT_DATABASEBACKEND)
#  define LIBQGIT2_DATABASEBACKEND_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_DATABASEBACKEND_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_DATABASEBACKEND_EXPORT_DEPRECATED
#  define LIBQGIT2_DATABASEBACKEND_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_OID_EXPORT
#if defined(MAKE_LIBQGIT2_COMPONENT_OID)
#  define LIBQGIT2_OID_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_OID_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_OID_EXPORT_DEPRECATED
#  define LIBQGIT2_OID_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_OBJECT_EXPORT
#if defined(MAKE_LIBQGIT2_OBJECT)
#  define LIBQGIT2_OBJECT_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_OBJECT_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_OBJECT_EXPORT_DEPRECATED
#  define LIBQGIT2_OBJECT_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_INDEX_EXPORT
#if defined(MAKE_LIBQGIT2_INDEX_OBJECT)
#  define LIBQGIT2_INDEX_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_INDEX_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_INDEX_EXPORT_DEPRECATED
#  define LIBQGIT2_INDEX_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_REFS_EXPORT
#if defined(MAKE_LIBQGIT2_REFS_OBJECT)
#  define LIBQGIT2_REFS_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_REFS_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_REFS_EXPORT_DEPRECATED
#  define LIBQGIT2_REFS_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_TAG_EXPORT
#if defined(MAKE_LIBQGIT2_TAG)
#  define LIBQGIT2_TAG_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_TAG_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_TAG_EXPORT_DEPRECATED
#  define LIBQGIT2_TAG_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_SIGNATURE_EXPORT
#if defined(MAKE_LIBQGIT2_SIGNATURE)
#  define LIBQGIT2_SIGNATURE_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_SIGNATURE_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_SIGNATURE_EXPORT_DEPRECATED
#  define LIBQGIT2_SIGNATURE_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_REVWALK_EXPORT
#if defined(MAKE_LIBQGIT2_REVWALK)
#  define LIBQGIT2_REVWALK_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_REVWALK_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_REVWALK_EXPORT_DEPRECATED
#  define LIBQGIT2_REVWALK_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_COMMIT_EXPORT
#if defined(MAKE_LIBQGIT2_COMMIT)
#  define LIBQGIT2_COMMIT_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_COMMIT_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_COMMIT_EXPORT_DEPRECATED
#  define LIBQGIT2_COMMIT_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_TREE_EXPORT
#if defined(MAKE_LIBQGIT2_TREE)
#  define LIBQGIT2_TREE_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_TREE_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_TREE_EXPORT_DEPRECATED
#  define LIBQGIT2_TREE_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_TREEENTRY_EXPORT
#if defined(MAKE_LIBQGIT2_TREEENTRY)
#  define LIBQGIT2_TREEENTRY_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_TREEENTRY_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_TREEENTRY_EXPORT_DEPRECATED
#  define LIBQGIT2_TREEENTRY_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#ifndef LIBQGIT2_RAWOBJECT_EXPORT
#if defined(MAKE_LIBQGIT2_RAWOBJECT)
#  define LIBQGIT2_RAWOBJECT_EXPORT Q_DECL_EXPORT
#else
#  define LIBQGIT2_RAWOBJECT_EXPORT Q_DECL_IMPORT
#endif
#endif

# ifndef LIBQGIT2_RAWOBJECT_EXPORT_DEPRECATED
#  define LIBQGIT2_RAWOBJECT_EXPORT_DEPRECATED Q_DECL_DEPRECATED LIBQGIT2_EXPORT
# endif

#endif // LIBQGIT2_EXPORT_H
