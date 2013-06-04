/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2013  Instituto Nokia de Tecnologia - INdT
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

struct btd_attribute;

void btd_gatt_service_manager_init(void);

void btd_gatt_service_manager_cleanup(void);

/* btd_gatt_add_service - Add a service declaration to local attribute database.
 * @uuid:	Service UUID.
 * @primary:	Set to 'true' if this is a primary services. Otherwise, it will
 *		be declared as a secondary service.
 *
 *
 * Returns a reference to service declaration attribute. In case of error,
 * NULL is returned.
 */
struct btd_attribute *btd_gatt_add_service(bt_uuid_t *uuid, bool primary);
