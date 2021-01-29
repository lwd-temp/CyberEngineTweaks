#pragma once

#include <reverse/BasicTypes.h>

struct TweakDB
{
  TweakDB(sol::state_view aLua);

  sol::object GetRecord(TweakDBID aDBID);
  sol::object Query(TweakDBID aDBID);
  sol::object GetFlat(TweakDBID aDBID);
  bool SetFlat(TweakDBID aDBID, sol::object aValue);

private:
  sol::state_view m_lua;
};