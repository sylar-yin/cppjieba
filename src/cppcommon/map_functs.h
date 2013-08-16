/************************************
 * file enc : ascii
 * author   : wuyanyi09@gmail.com
 ************************************/


#ifndef CPPCOMMON_MAP_FUNCTS_H
#define CPPCOMMON_MAP_FUNCTS_H

#include <map>
#include <iostream>

namespace CPPCOMMON
{
	using namespace std;

	
	template<class kT, class vT>
		void printMap(const map<kT, vT>& mp)
		{
			for(typename map<kT, vT>::const_iterator it = mp.begin(); it != mp.end(); it++)
			{
				cout<<it->first<<' '<<it->second<<endl;
			}
		}

	template<class kT, class vT>
		vT getMap(const map<kT, vT>& mp, const kT & key, const vT & defaultVal)
		{
			typename map<kT, vT>::const_iterator it;
			it = mp.find(key);
			if(mp.end() == it)
			{
				return defaultVal;
			}
			return it->second;
		}

}

#endif