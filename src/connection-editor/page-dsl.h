/* -*- Mode: C; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*- */
/* NetworkManager Connection editor -- Connection editor for NetworkManager
 *
 * Dan Williams <dcbw@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * (C) Copyright 2008 Red Hat, Inc.
 */

#ifndef __PAGE_DSL_H__
#define __PAGE_DSL_H__

#include <nm-connection.h>

#include <glib/gtypes.h>
#include <glib-object.h>

#include "ce-page.h"

#define CE_TYPE_PAGE_DSL            (ce_page_dsl_get_type ())
#define CE_PAGE_DSL(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), CE_TYPE_PAGE_DSL, CEPageDsl))
#define CE_PAGE_DSL_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), CE_TYPE_PAGE_DSL, CEPageDslClass))
#define CE_IS_PAGE_DSL(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CE_TYPE_PAGE_DSL))
#define CE_IS_PAGE_DSL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((obj), CE_TYPE_PAGE_DSL))
#define CE_PAGE_DSL_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), CE_TYPE_PAGE_DSL, CEPageDslClass))

typedef struct {
	CEPage parent;
} CEPageDsl;

typedef struct {
	CEPageClass parent;
} CEPageDslClass;

GType ce_page_dsl_get_type (void);

CEPageDsl *ce_page_dsl_new (NMConnection *connection);

#endif  /* __PAGE_DSL_H__ */