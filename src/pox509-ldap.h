/*
 * Copyright (C) 2014-2015 Sebastian Roland <seroland86@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * LDAP processing.
 *
 * @file pox509-ldap.h
 * @author Sebastian Roland <seroland86@gmail.com>
 * @date 2015-06-15
 * @see https://github.com/flix-/pam-openssh-x509
 */

#ifndef POX509_LDAP_H
#define POX509_LDAP_H

#include <confuse.h>
#include <openssl/x509.h>

#include "pox509-util.h"

/**
 * Obtain access permission and x509 certificate of user from LDAP.
 *
 * The user object corresponding to the given UID is searched in the
 * LDAP server and access permission as well as the x509 certificate
 * of the user will be retrieved.
 *
 * @param[in] cfg Configuration structure. Must not be @c NULL.
 * @param[out] pox509_info DTO. Access permission will be stored here.
 * Must not be @c NULL.
 * @param[out] x509 The parsed x509 certificate.
 */
void retrieve_authorization_and_x509_from_ldap(cfg_t *cfg,
    struct pox509_info *pox509_info, X509 **x509);
#endif
