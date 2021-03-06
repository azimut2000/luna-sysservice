/**
 *  Copyright (c) 2010-2013 LG Electronics, Inc.
 * 
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */


#ifndef TZPARSER_H
#define TZPARSER_H

#include <list>
#include <time.h>

#define TZ_ABBR_MAX_LEN	16

struct TzTransition
{
	time_t time;
	time_t utcOffset;
	bool   isDst;
	int    year;
	char   abbrName[TZ_ABBR_MAX_LEN];
};

typedef std::list<TzTransition> TzTransitionList;

TzTransitionList parseTimeZone(const char* tzName);

#endif /* TZPARSER_H */
