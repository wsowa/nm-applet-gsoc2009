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
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * (C) Copyright 2008 Red Hat, Inc.
 */

#ifndef __PAGE_WIRED_SECURITY_H__
#define __PAGE_WIRED_SECURITY_H__

#include "nm-connection-editor.h"

#include <nm-connection.h>

#include <glib.h>
#include <glib-object.h>

#include "ce-page.h"

#define CE_TYPE_PAGE_WIRED_SECURITY            (ce_page_wired_security_get_type ())
#define CE_PAGE_WIRED_SECURITY(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), CE_TYPE_PAGE_WIRED_SECURITY, CEPageWiredSecurity))
#define CE_PAGE_WIRED_SECURITY_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), CE_TYPE_PAGE_WIRED_SECURITY, CEPageWiredSecurityClass))
#define CE_IS_PAGE_WIRED_SECURITY(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CE_TYPE_PAGE_WIRED_SECURITY))
#define CE_IS_PAGE_WIRED_SECURITY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((obj), CE_TYPE_PAGE_WIRED_SECURITY))
#define CE_PAGE_WIRED_SECURITY_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), CE_TYPE_PAGE_WIRED_SECURITY, CEPageWiredSecurityClass))

typedef struct {
	CEPage parent;
} CEPageWiredSecurity;

typedef struct {
	CEPageClass parent;
} CEPageWiredSecurityClass;

GType ce_page_wired_security_get_type (void);

CEPage *ce_page_wired_security_new (NMConnection *connection, GtkWindow *parent, GError **error);

#endif  /* __PAGE_WIRED_SECURITY_H__ */
