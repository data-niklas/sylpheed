/*
 * Sylpheed -- a GTK+ based, lightweight, and fast e-mail client
 * Copyright (C) 1999-2005 Hiroyuki Yamamoto
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
 */

#ifndef __ACCOUNT_DIALOG_H__
#define __ACCOUNT_DIALOG_H__

#include <glib.h>

#include "prefs_account.h"

void	      account_set_menu		(void);

void	      account_edit_open		(void);
void	      account_add		(void);
void	      account_open		(PrefsAccount	*ac_prefs);

void	      account_set_missing_folder(void);

#endif /* __ACCOUNT_DIALOG_H__ */
