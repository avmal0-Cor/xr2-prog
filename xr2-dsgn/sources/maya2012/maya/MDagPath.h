#ifndef _MDagPath
#define _MDagPath
//-
// ==========================================================================
// Copyright (C) 1995 - 2006 Autodesk, Inc., and/or its licensors.  All
// rights reserved.
//
// The coded instructions, statements, computer programs, and/or related
// material (collectively the "Data") in these files contain unpublished
// information proprietary to Autodesk, Inc. ("Autodesk") and/or its
// licensors,  which is protected by U.S. and Canadian federal copyright law
// and by international treaties.
//
// The Data may not be disclosed or distributed to third parties or be
// copied or duplicated, in whole or in part, without the prior written
// consent of Autodesk.
//
// The copyright notices in the Software and this entire statement,
// including the above license grant, this restriction and the following
// disclaimer, must be included in all copies of the Software, in whole
// or in part, and all derivative works of the Software, unless such copies
// or derivative works are solely in the form of machine-executable object
// code generated by a source language processor.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
// AUTODESK DOES NOT MAKE AND HEREBY DISCLAIMS ANY EXPRESS OR IMPLIED
// WARRANTIES INCLUDING, BUT NOT LIMITED TO, THE WARRANTIES OF
// NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE,
// OR ARISING FROM A COURSE OF DEALING, USAGE, OR TRADE PRACTICE. IN NO
// EVENT WILL AUTODESK AND/OR ITS LICENSORS BE LIABLE FOR ANY LOST
// REVENUES, DATA, OR PROFITS, OR SPECIAL, DIRECT, INDIRECT, OR
// CONSEQUENTIAL DAMAGES, EVEN IF AUTODESK AND/OR ITS LICENSORS HAS
// BEEN ADVISED OF THE POSSIBILITY OR PROBABILITY OF SUCH DAMAGES.
// ==========================================================================
//+
//
// CLASS:    MDagPath
//
// ****************************************************************************
//
// CLASS DESCRIPTION (MDagPath)
//
//	The DAG Path Class provides methods for obtaining one or all Paths to a
//	specified DAG Node, determining if a Path is valid and if two Paths are
//	equivalent, obtaining the length, transform, and inclusive and exclusive
//	matrices of Path, as well as performing Path to Path assignment.
//
// ****************************************************************************

#if defined __cplusplus

// ****************************************************************************
// INCLUDED HEADER FILES


#include <maya/MStatus.h>
#include <maya/MTypes.h>
#include <maya/MStatus.h>
#include <maya/MObject.h>

// ****************************************************************************
// DECLARATIONS

class MMatrix;
class MDagPathArray;
class MString;

// ****************************************************************************
// CLASS DECLARATION (MDagPath)

//! \ingroup OpenMaya
//! \brief  DAG Path.
/*!
Provides methods for obtaining one or all Paths to a specified DAG Node,
determining if a Path is valid and if two Paths are equivalent, obtaining the
length, transform, and inclusive and exclusive matrices of a Path, as well as
performing Path to Path assignment.

DAG Paths may be used as parameters to some methods in the DAG Node Function
Set (MFnDagNode).

It is often useful to combine DAG Paths into DAG Path arrays
(MDagPathArray).

Use this DAG Path Class to obtain and query Paths to DAG Nodes.  A DAG path
is a path from the world node to a particular object in the DAG.

If a DAG object is instanced, then an MDagPath is required to identify a
particular instance.  DAG paths are also required when doing world space
transformations.

Use this class in conjunction with the DAG Iterator (MItDag), DAG Node
Function Set (MFnDagNode) and DAG Path Array class (MDagPathArray) to query and
edit the DAG.
*/
class OPENMAYA_EXPORT MDagPath
{

public:
	MDagPath();
	MDagPath( const MDagPath& src );
	virtual ~MDagPath();

	static MStatus	getAllPathsTo( const MObject & node,
								   MDagPathArray & pathArray );
	static MStatus	getAPathTo( const MObject & node,
								MDagPath & path );
	bool            hasFn( MFn::Type type,
						   MStatus * ReturnStatus = NULL ) const;
	MFn::Type       apiType(MStatus * ReturnStatus = NULL) const;

	bool        	isValid(MStatus * ReturnStatus = NULL) const;
	MObject      	node(MStatus * ReturnStatus = NULL) const;
	MObject   		transform( MStatus * ReturnStatus = NULL ) const;
	unsigned int    length(MStatus * ReturnStatus = NULL) const;
	MStatus         extendToShape();
	MStatus         extendToShapeDirectlyBelow( unsigned int );
	MStatus         numberOfShapesDirectlyBelow( unsigned int& ) const;
	MStatus         push( const MObject &child );
	MStatus         pop( unsigned int num = 1 );
	unsigned int        childCount(  MStatus * ReturnStatus = NULL ) const;
	MObject 	    child( unsigned int i, MStatus * ReturnStatus = NULL ) const;
	MMatrix      	inclusiveMatrix(MStatus * ReturnStatus = NULL) const;
	MMatrix      	exclusiveMatrix(MStatus * ReturnStatus = NULL) const;
	MMatrix      	inclusiveMatrixInverse(MStatus * ReturnStatus = NULL)const;
	MMatrix      	exclusiveMatrixInverse(MStatus * ReturnStatus = NULL)const;
	MDagPath&		operator = ( const MDagPath& src);
	bool			operator == ( const MDagPath& src) const;
	MStatus         set( const MDagPath& src);

	unsigned int		pathCount(MStatus * ReturnStatus = NULL) const;
	MStatus			getPath( MDagPath & path, unsigned int i = 0 ) const;
	MString         fullPathName(MStatus *ReturnStatus = NULL) const;
	MString         partialPathName(MStatus *ReturnStatus = NULL) const;

	bool            isInstanced( MStatus *ReturnStatus = NULL ) const;
	unsigned int    instanceNumber( MStatus *ReturnStatus = NULL ) const;
	bool            isVisible( MStatus *ReturnStatus = NULL ) const;
	bool            isTemplated( MStatus *ReturnStatus = NULL ) const;

	static const char* className();

	//! Obsolete
	static MDagPath getAPathTo( const MObject & node,
								MStatus * ReturnStatus = NULL );

protected:
// No protected members

private:

 	void * data;
};

#endif /* __cplusplus */
#endif /* _MDagPath */