/***************************************************************************
 *   Copyright (C) by ETHZ/SED                                             *
 *                                                                         *
 * This program is free software: you can redistribute it and/or modify    *
 * it under the terms of the GNU LESSER GENERAL PUBLIC LICENSE as published*
 * by the Free Software Foundation, either version 3 of the License, or    *
 * (at your option) any later version.                                     *
 *                                                                         *
 * This software is distributed in the hope that it will be useful,        *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 * GNU Affero General Public License for more details.                     *
 *                                                                         *
 *   Developed by gempa GmbH                                               *
 ***************************************************************************/

// This file was created by a source code generator.
// Do not modify the contents. Change the definition and run the generator
// again!

#ifndef __SEISCOMP_DATAMODEL_STRONGMOTION_DATABASEREADER_H__
#define __SEISCOMP_DATAMODEL_STRONGMOTION_DATABASEREADER_H__


#include <seiscomp/datamodel/object.h>
#include <seiscomp/datamodel/databasequery.h>
#include <seiscomp/datamodel/strongmotion/api.h>


namespace Seiscomp {
namespace DataModel {
namespace StrongMotion {

class StrongMotionParameters;
class SimpleFilter;
class FilterParameter;
class Record;
class SimpleFilterChainMember;
class PeakMotion;
class StrongOriginDescription;
class EventRecordReference;
class Rupture;

DEFINE_SMARTPOINTER(StrongMotionReader);

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/** \brief Database reader class for the scheme classes
 *  This class uses a database interface to read objects from a database.
 *  Different database backends can be implemented by creating a driver
 *  in seiscomp/services/database.
 */
class SC_STRONGMOTION_API StrongMotionReader : public DatabaseQuery {
	// ----------------------------------------------------------------------
	//  Xstruction
	// ----------------------------------------------------------------------
	public:
		//! Constructor
		StrongMotionReader(Seiscomp::IO::DatabaseInterface* dbDriver);

		//! Destructor
		~StrongMotionReader();


	// ----------------------------------------------------------------------
	//  Read methods
	// ----------------------------------------------------------------------
	public:
		StrongMotionParameters* loadStrongMotionParameters();
		int load(StrongMotionParameters*);
		int loadSimpleFilters(StrongMotionParameters*);
		int loadRecords(StrongMotionParameters*);
		int loadStrongOriginDescriptions(StrongMotionParameters*);
		int load(SimpleFilter*);
		int loadFilterParameters(SimpleFilter*);
		int load(Record*);
		int loadSimpleFilterChainMembers(Record*);
		int loadPeakMotions(Record*);
		int load(StrongOriginDescription*);
		int loadEventRecordReferences(StrongOriginDescription*);
		int loadRuptures(StrongOriginDescription*);

};
// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


}
}
}


#endif
