// Reminder: Modify typemap.dat to customize the header file generated by wsdl2h
/* xmas.h
   Generated by wsdl2h 1.2.9l from xmas.wsdl and typemap.dat
   2007-12-30 21:53:07 GMT
   Copyright (C) 2001-2007 Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL or Genivia's license for commercial use.
*/

/* NOTE:

 - Compile this file with soapcpp2 to complete the code generation process.
 - Use soapcpp2 option -I to specify paths for #import
   To build with STL, 'stlvector.h' is imported from 'import' dir in package.
 - Use wsdl2h options -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control schema namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Use Doxygen (www.doxygen.org) to browse this file.
 - Use wsdl2h option -l to view the software license terms.

   DO NOT include this file directly into your project.
   Include only the soapcpp2-generated headers and source code files.
*/

//gsoapopt cw

/******************************************************************************\
 *                                                                            *
 * http://www.genivia.com/mashup.wsdl                                         *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

ns1 = "http://www.genivia.com/mashup.wsdl"
ns2 = "urn:daystoxmas"

*/

//gsoap ns2   schema namespace:	urn:daystoxmas
//gsoap ns2   schema form:	qualified

/******************************************************************************\
 *                                                                            *
 * Schema Types                                                               *
 *                                                                            *
\******************************************************************************/



/// Element "urn:daystoxmas":daystoxmas.
/// Note: use wsdl2h option -g to generate this global element declaration.


/// Element "urn:daystoxmas":commingtotown of complexType.

/// "urn:daystoxmas":commingtotown is a complexType.
struct _ns2__commingtotown
{
/// Element days of type xs:int.
    int                                  days                           1;	///< Required element.
};

/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/


//gsoap ns1  service name:	mashup 
//gsoap ns1  service type:	PortType 
//gsoap ns1  service port:	http://www.cs.fsu.edu/~engelen/mashup.cgi 
//gsoap ns1  service namespace:	http://www.genivia.com/mashup.wsdl 
//gsoap ns1  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage Service Definitions

@section Service_bindings Bindings
  - @ref mashup

*/

/**

@page mashup Binding "mashup"

@section mashup_operations Operations of Binding  "mashup"
  - @ref __ns1__dtx

@section mashup_ports Endpoints of Binding  "mashup"
  - http://www.cs.fsu.edu/~engelen/mashup.cgi

Note: use wsdl2h option -N to change the service binding prefix name

*/

/******************************************************************************\
 *                                                                            *
 * mashup                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * __ns1__dtx                                                                 *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns1__dtx" of service binding "mashup"

/**

Operation details:

  - SOAP document/literal style

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__dtx(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    _XML                                ns2__daystoxmas,
    // response parameters:
    struct _ns2__commingtotown*         ns2__commingtotown
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__dtx(
    struct soap *soap,
    // request parameters:
    _XML                                ns2__daystoxmas,
    // response parameters:
    struct _ns2__commingtotown*         ns2__commingtotown
  );
@endcode

*/

//gsoap ns1  service method-style:	dtx document
//gsoap ns1  service method-encoding:	dtx literal
//gsoap ns1  service method-action:	dtx ""
int __ns1__dtx(
    _XML                                ns2__daystoxmas,	///< Request parameter
    struct _ns2__commingtotown*         ns2__commingtotown	///< Response parameter
);

/* End of xmas.h */
