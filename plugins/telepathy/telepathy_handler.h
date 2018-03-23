/*
 * Remmina - The GTK+ Remote Desktop Client
 * Copyright (C) 2010 Vic Lee
 * Copyright (C) 2017 Antenore Gatta, Giovanni Panozzo
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 *
 *  In addition, as a special exception, the copyright holders give
 *  permission to link the code of portions of this program with the
 *  OpenSSL library under certain conditions as described in each
 *  individual source file, and distribute linked combinations
 *  including the two.
 *  You must obey the GNU General Public License in all respects
 *  for all of the code used other than OpenSSL. *  If you modify
 *  file(s) with this exception, you may extend this exception to your
 *  version of the file(s), but you are not obligated to do so. *  If you
 *  do not wish to do so, delete this exception statement from your
 *  version. *  If you delete this exception statement from all source
 *  files in the program, then also delete it here.
 *
 */

#pragma once

G_BEGIN_DECLS

#define REMMINA_TYPE_TP_HANDLER           (remmina_tp_handler_get_type())
#define REMMINA_TP_HANDLER(obj)           (G_TYPE_CHECK_INSTANCE_CAST((obj), REMMINA_TYPE_TP_HANDLER, RemminaTpHandler))
#define REMMINA_TP_HANDLER_CLASS(obj)     (G_TYPE_CHECK_CLASS_CAST((obj), REMMINA_TYPE_TP_HANDLER, RemminaTpHandlerClass))
#define REMMINA_IS_TP_HANDLER(obj)        (G_TYPE_CHECK_INSTANCE_TYPE((obj), REMMINA_TYPE_TP_HANDLER))
#define REMMINA_IS_TP_HANDLER_CLASS(obj)  (G_TYPE_CHECK_CLASS_TYPE((obj), REMMINA_TYPE_TP_HANDLER))
#define REMMINA_TP_HANDLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS((obj), REMMINA_TYPE_TP_HANDLER, RemminaTpHandlerClass))

typedef struct _RemminaTpHandler {
	GObject parent;
} RemminaTpHandler;

typedef struct _RemminaTpHandlerClass {
	GObjectClass parent_class;
} RemminaTpHandlerClass;

RemminaTpHandler* remmina_tp_handler_new(void);

G_END_DECLS

