/*
   +----------------------------------------------------------------------+
   | PHP Version 4                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2003 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.02 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available at through the world-wide-web at                           |
   | http://www.php.net/license/2_02.txt.                                 |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Christian Stocker <chregu@php.net>                          |
   |          Rob Richards <rrichards@php.net>                            |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_dom.h"


/*
* class domlocator 
*
* URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#Interfaces-DOMLocator
* Since: DOM Level 3
*/

zend_function_entry php_dom_domlocator_class_functions[] = {
	{NULL, NULL, NULL}
};

/* {{{ attribute protos, not implemented yet */

/* {{{ proto line_number	long	
readonly=yes 
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#DOMLocator-line-number
Since: 
*/
int dom_domlocator_line_number_read(dom_object *obj, zval **retval TSRMLS_DC)
{
	ALLOC_ZVAL(*retval);
	ZVAL_STRING(*retval, "TEST", 1);
	return SUCCESS;
}

/* }}} */



/* {{{ proto column_number	long	
readonly=yes 
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#DOMLocator-column-number
Since: 
*/
int dom_domlocator_column_number_read(dom_object *obj, zval **retval TSRMLS_DC)
{
	ALLOC_ZVAL(*retval);
	ZVAL_STRING(*retval, "TEST", 1);
	return SUCCESS;
}

/* }}} */



/* {{{ proto offset	long	
readonly=yes 
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#DOMLocator-offset
Since: 
*/
int dom_domlocator_offset_read(dom_object *obj, zval **retval TSRMLS_DC)
{
	ALLOC_ZVAL(*retval);
	ZVAL_STRING(*retval, "TEST", 1);
	return SUCCESS;
}

/* }}} */



/* {{{ proto related_node	node	
readonly=yes 
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#DOMLocator-node
Since: 
*/
int dom_domlocator_related_node_read(dom_object *obj, zval **retval TSRMLS_DC)
{
	ALLOC_ZVAL(*retval);
	ZVAL_STRING(*retval, "TEST", 1);
	return SUCCESS;
}

/* }}} */



/* {{{ proto uri	string	
readonly=yes 
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#DOMLocator-uri
Since: 
*/
int dom_domlocator_uri_read(dom_object *obj, zval **retval TSRMLS_DC)
{
	ALLOC_ZVAL(*retval);
	ZVAL_STRING(*retval, "TEST", 1);
	return SUCCESS;
}

/* }}} */


